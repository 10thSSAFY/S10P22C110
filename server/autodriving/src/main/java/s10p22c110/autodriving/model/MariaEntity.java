package s10p22c110.autodriving.model;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.validation.constraints.NotNull;
import lombok.Getter;
import lombok.Setter;

@Entity
@Getter
@Setter
public class MariaEntity {

    @Id
    @Column(length = 20)
    private String userId;
    
    @NotNull
    private String password;

    @NotNull
    @Column(length = 20)
    private String name;
}
