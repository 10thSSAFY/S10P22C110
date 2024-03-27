package s10p22c110.autodriving.model;

import com.fasterxml.jackson.core.JsonProcessingException;
import com.fasterxml.jackson.databind.ObjectMapper;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.Table;
import lombok.Getter;
import lombok.Setter;

@Entity
@Getter
@Setter
@Table(name = "patient")
public class Patient {
    
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;
    
    @Column(name = "lat")
    private String lat;

    @Column(name = "lon")
    private String lon;

    // 기본 생성자
    public Patient() {
    }

    // 모든 필드를 포함한 생성자
    public Patient(String lat, String lon) {
        this.lat = lat;
        this.lon = lon;
    }
    // 객체를 JSON 문자열로 변환하는 메서드
    public String toJsonString() throws JsonProcessingException {
        ObjectMapper mapper = new ObjectMapper();
        return mapper.writeValueAsString(this);
    }

    // JSON 문자열을 객체로 변환하는 메서드
    public static Patient fromJsonString(String jsonString) throws JsonProcessingException {
        ObjectMapper mapper = new ObjectMapper();
        return mapper.readValue(jsonString, Patient.class);
    }
}
