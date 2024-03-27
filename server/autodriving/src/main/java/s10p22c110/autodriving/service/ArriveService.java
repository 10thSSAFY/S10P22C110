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

        double distance = calculateDistance(patient.getLat(), patient.getLon(), car.getLat(), car.getLon());

        return distance <= 0.00001; // SOME_THRESHOLD는 오차 범위를 정의합니다.
    }

    private double calculateDistance(double lat1, double lon1, double lat2, double lon2) {
        double lat = Math.abs(lat1 - lat2);
        double lon = Math.abs(lon1 - lon2);
        return lat + lon; // 예시 코드이므로 실제 구현이 필요합니다.
    }    
}
