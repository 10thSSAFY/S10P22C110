package s10p22c110.autodriving.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import s10p22c110.autodriving.model.Car;
import s10p22c110.autodriving.model.Patient;
import s10p22c110.autodriving.repository.CarRepository;
import s10p22c110.autodriving.repository.PatientRepository;

@Service
public class ArriveService {

    @Autowired
    private PatientRepository patientRepository;
    @Autowired
    private CarRepository carRepository;

    public boolean checkArrival(Long id) {
        if (id == null) {
            throw new IllegalArgumentException("ID cannot be null.");
        }
        Patient patient = patientRepository.findById(id).orElseThrow();
        Car car = carRepository.findById(id).orElseThrow();

        double patientLat = Double.parseDouble(patient.getLat());
        double patientLon = Double.parseDouble(patient.getLon());
        double carLat = Double.parseDouble(car.getLat());
        double carLon = Double.parseDouble(car.getLon());

        double distance = calculateDistance(patientLat, patientLon, carLat, carLon);

        return distance <= 0.00001; // 오차 범위를 정의합니다.
    }

    private double calculateDistance(double lat1, double lon1, double lat2, double lon2) {
        // 간단한 직선 거리 계산
        double lat = Math.abs(lat1 - lat2);
        double lon = Math.abs(lon1 - lon2);
        return Math.sqrt(lat * lat + lon * lon); // 직선 거리 계산
    }    
}
