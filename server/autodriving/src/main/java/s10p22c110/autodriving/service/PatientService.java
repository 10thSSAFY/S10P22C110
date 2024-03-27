package s10p22c110.autodriving.service;

import java.util.List;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import s10p22c110.autodriving.model.Patient;
import s10p22c110.autodriving.repository.PatientRepository;

@Service
public class PatientService {

    @Autowired
    private PatientRepository departualRepository;

    public Patient saveDepartual(Patient departual) {
        if (departual == null) {
            throw new IllegalArgumentException("Input departual cannot be null.");
        }
        return departualRepository.save(departual);
    }

    // 모든 Patient 정보 조회
    public List<Patient> findAllPatients() {
        return departualRepository.findAll();
    }

    // 특정 id를 가진 Patient 정보 조회
    public Patient findPatientById(Long id) {
        if (id == null) {
            throw new IllegalArgumentException("ID cannot be null.");
        }
        Optional<Patient> patient = departualRepository.findById(id);
        return patient.orElse(null);
    }

    // 특정 ID를 가진 Patient의 lat과 lon 데이터 값을 수정하는 메소드
    public Patient updatePatientLocation(Long id, double lat, double lon) {
        if (id == null) {
            throw new IllegalArgumentException("ID cannot be null.");
        }
        Optional<Patient> patientOptional = departualRepository.findById(id);
        if (patientOptional.isPresent()) {
            Patient patient = patientOptional.get();
            patient.setLat(lat);
            patient.setLon(lon);
            return departualRepository.save(patient);
        } else {
            throw new IllegalArgumentException("Patient with ID " + id + " not found.");
        }
    }
}
