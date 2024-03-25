package s10p22c110.autodriving.repository;

import org.springframework.data.mongodb.repository.MongoRepository;

import s10p22c110.autodriving.model.MongoEntity;

public interface MongoEntityRepository extends MongoRepository<MongoEntity, String> {
    
}
