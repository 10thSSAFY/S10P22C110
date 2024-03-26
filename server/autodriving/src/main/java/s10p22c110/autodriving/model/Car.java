package s10p22c110.autodriving.model;

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
@Table(name = "car")
public class Car {

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;

    @Column(name = "lat")
    private double lat;

    @Column(name = "lon")
    private double lon;

    // 기본 생성자
    public Car() {
    }

    // 모든 필드를 포함한 생성자
    public Car(double lat, double lon) {
        this.lat = lat;
        this.lon = lon;
    }
}
