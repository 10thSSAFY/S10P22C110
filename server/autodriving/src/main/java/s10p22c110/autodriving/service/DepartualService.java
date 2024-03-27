package s10p22c110.autodriving.service;

import java.util.List;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import s10p22c110.autodriving.model.Patient;
import s10p22c110.autodriving.repository.DepartualRepository;

@Service
public class DepartualService {

    @Autowired
    private DepartualRepository departualRepository;

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
}
