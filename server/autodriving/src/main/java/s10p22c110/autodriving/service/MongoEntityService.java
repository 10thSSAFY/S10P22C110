package s10p22c110.autodriving.service;

import java.util.List;

import s10p22c110.autodriving.model.MongoEntity;

public interface MongoEntityService {

    MongoEntity createUser(MongoEntity mongoEntity);
    List<MongoEntity> getAllMongoEntities();
    MongoEntity getMongoEntityById(String id);
    void deleteMongoEntityById(String id);
}
