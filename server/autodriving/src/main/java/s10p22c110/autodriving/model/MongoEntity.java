package s10p22c110.autodriving.model;

import org.springframework.data.mongodb.core.mapping.Document;

import jakarta.persistence.Id;
import lombok.Getter;
import lombok.Setter;

@Document(collection = "customers")
@Getter
@Setter
public class MongoEntity {

    @Id
    private String id;
    private String firstName;
    private String lastName;

    // 기본 생성자
    public MongoEntity() {}

    // 매개변수가 있는 생성자
    public MongoEntity(String firstName, String lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
    }

    // toString 메소드
    @Override
    public String toString() {
        return String.format("Customer[id=%s, firstName='%s', lastName='%s']", id, firstName, lastName);
    }
}
