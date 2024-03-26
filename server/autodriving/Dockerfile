# 기본 이미지로 OpenJDK가 포함된 이미지를 사용합니다.
FROM openjdk:17-jdk-alpine AS builder

# 소스 코드와 빌드 도구를 컨테이너에 복사합니다.
COPY . /home/app

# 작업 디렉토리를 설정합니다.
WORKDIR /home/app

RUN chmod +x ./gradlew

# Gradle wrapper를 사용하여 프로젝트를 빌드합니다.
RUN ./gradlew build

# 실행 이미지를 위한 새로운 단계를 시작합니다.
FROM openjdk:17

# 빌드 단계에서 생성된 실행 가능한 JAR 파일을 복사합니다.
COPY --from=build /home/app/build/libs/*.jar /usr/local/lib/spring-boot-application.jar

# 애플리케이션 실행
ENTRYPOINT ["java", "-jar", "/usr/local/lib/autodriving-0.0.1-SNAPSHOT.jar"]
