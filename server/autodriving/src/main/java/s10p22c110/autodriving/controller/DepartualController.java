package s10p22c110.autodriving.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
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
}
