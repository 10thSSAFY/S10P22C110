package s10p22c110.autodriving.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import s10p22c110.autodriving.model.Car;

@Repository
public interface CarRepository extends JpaRepository<Car, Long>{
    
}
