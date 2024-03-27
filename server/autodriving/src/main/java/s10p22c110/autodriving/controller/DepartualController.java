package s10p22c110.autodriving.controller;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import s10p22c110.autodriving.model.Patient;
import s10p22c110.autodriving.service.DepartualService;

@RestController
@RequestMapping("/patients")
public class DepartualController {

    @Autowired
    private DepartualService departualService;

    @PostMapping
    public ResponseEntity<Patient> createDepartual(@RequestBody Patient departual) {
        Patient savedDepartual = departualService.saveDepartual(departual);
        return ResponseEntity.ok(savedDepartual);
    }

    // 모든 Patient 정보 조회
    @GetMapping
    public ResponseEntity<List<Patient>> getAllPatients() {
        List<Patient> patients = departualService.findAllPatients();
        return ResponseEntity.ok(patients);
    }

    // 특정 id를 가진 Patient 정보 조회
    @GetMapping("/{id}")
    public ResponseEntity<Patient> getPatientById(@PathVariable Long id) {
        Patient patient = departualService.findPatientById(id);
        return ResponseEntity.ok(patient);
    }
}
