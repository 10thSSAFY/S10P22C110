package s10p22c110.autodriving.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import s10p22c110.autodriving.model.Patient;
import s10p22c110.autodriving.repository.DepartualRepository;

@Service
public class DepartualService {

    @Autowired
    private DepartualRepository departualRepository;

    public Patient saveDepartual(Patient departual) {
        if (departual != null) {
            return departualRepository.save(departual);
        } else {
            throw new IllegalArgumentException("Input departual cannot be null.");
        }
    }
    
}
