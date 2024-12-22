# 짜파게티 팀 프로젝트 소개
 
[<img width="200" alt="image" src="https://github.com/user-attachments/assets/142be60b-617a-417e-a2af-20b4b3b0d1e7" />](https://i.namu.wiki/i/nC4HhrjA1ittihqnFsaEN4rddpNYsNRZDKIY88OZS8W8ClFH5RVmYhIqGP5zpCUIKeWOYtPuOrRWJRG83OgYv4rF3RccKwvdr8WKt_GWC690J2N5-kQotfij2BJikMafnNtazrfdWnUlzda4Quk5kg.webp)


## 목차

- [팀 소개](#팀-소개)
- [프로젝트 개발 이유](#프로젝트-개발-이유)
- [프로젝트 개요](#프로젝트-개요)
- [실행](#실행)
- [마무리](#마무리)

---

## 팀 소개

### 팀 이름: 짜파게티 팀

| 이름          | 역할           | GitHub Profile                                   |
|---------------|----------------|-------------------------------------------------|
| 신우찬       | 팀장 / 백엔드  | [@Woochan0510](https://github.com/Woochan0510)   |
| 정채건       | 아두이노 하드웨어     | [@jcg0615](https://github.com/jcg0615) |
| 조서호       | 3d프린터       | [@Domilove](https://github.com/Domilove)     |
| 노경윤       | 프로젝트 소개  | [@shruddbs](https://github.com/shruddbs) |

---

## 프로젝트 개발 이유

<img width = "572" alt = "img" src="https://i.ytimg.com/vi/fvrzJXQDf0U/maxresdefault.jpg"/>
저희 팀은 우연히 태평양에 구성되어 점점 커져가는 쓰레기 섬의 존재를 알게 되었고, 이에 해양 쓰레기 문제의 심각성을 깨닫게 되었습니다.
이에 해양쓰레기의 수를 줄이고자 이러한 프로젝트를 기획하고 개발하게 되었습니다.

 -**해양 쓰레기 사진**
 
 <img width="572" alt="화면 캡처 2024-12-22 101046" src="https://github.com/user-attachments/assets/c0e954f4-02b6-40ba-9f42-8a17689fa178" />

### 주요 동기:
1. **문제 정의**: 해양생태계 보존.
2. **해결 목표**: 해양 쓰레기 감소, 환경 오염 억제.
3. **핵심 가치**: 자동성, 편리성, 효율성.

---

## 프로젝트 개요

### 프로젝트 이름: **marine garvage collection boat**

### 주요 기능:
- **쓰레기 감지기능**: 카메라(인공위성)으로 바다위 쓰레기 감지하고 거리파악.
- **아두이노 모터 제어**: 카메라로 받은 쓰레기 위치를 파악하여 쓰레기있는 위치로 이동함.

### 사용된 언어와 외장함수:
- **사물 인식 시스템**: faster R-cnn
  
  ![KakaoTalk_20241222_144738122](https://github.com/user-attachments/assets/e14b08db-e7c7-4ee9-a956-3b24ad0c4878)


- **배 제작**: 아두이노 IDE
  
![image](https://github.com/user-attachments/assets/67307f6b-e1fe-42b4-8864-7bd327ddc320)

- **3D 프린트 모델링**
  
![KakaoTalk_20241222_151655965](https://github.com/user-attachments/assets/c035f795-080a-483f-bf0f-6dfab7045b9e)


- **인공지능 학습**

![KakaoTalk_20241222_151816907](https://github.com/user-attachments/assets/cd18b1e4-216e-42d6-8136-00e581e9b210)

---

## 실행

### 1. 환경 설정
1. **프로젝트 클론**
   ```bash
   git clone https://github.com/Woochan0510/makerton.git
   ```

2. **환경 변수 설정**
   터미널 창에 아래내용을 입력:
   ```bash
    python -m venv venv
   ```
3. **환경 변수 실행**
   터미널 창에 아래 내용을 입력:
   ```bash
    .\venv\Scripts\activate
   ```

5. **필요 파일 다운로드**
   터미널 창에 아래 내용을 입력:
   ```bash
    pip install -r requirements.txt
   ```

### 2. 실행

1. **프로그램 실행**
   ```bash
   python main.py
   ```

### 3. 시연 영상
   
 [https://github.com/user-attachments/assets/7cb78dc2-f80b-4a22-b4c5-58d129b39d2f](https://www.youtube.com/shorts/1pPS6K6tBJM)


---


## 마무리
### 1.어려웠던 점

1. ##아두이노 모터 제어## : L293DD라는 모듈을 처음 사용하여  관련된 정보를 찾아보고 공부하려 했지만 이 모듈의 관련된 정보가 생각보다 적어 작동시키는게 어려웠다.
   
2. ##아두이노 블루투스 모듈## : 아두이노 블루투스 모듈의 이상인지 블루투스 통신이 제대로 이루어지지 않았다.
 
3. ##사물인식 인공지능 학습## : 데이터를 전처리 하여 yolov5에 학습시키는 것이 어려워, 이에 여러가지 방안을 찾아보며 최종적으로 Faster R-CNN 모델을 사용했다.
  
4. ##배 출력 시간 지연## : 3D프린터를 이용하여 배의 외형을 출력하는데에 많은 시간이 소요되며 실제 시연품을 완성하지 못했다.


### 2.발전시킬점

쓰레기의 종류(비닐, 플라스틱 등)를 인지하여 해양에서 수집한 쓰레기를 자동으로 분리수거하는 시스템을 발전시킨다면 효율적인 쓰레기 처리가 가능해질 것이다.


### 3.해양생태계 와 사회에 끼칠 영향

 인공지능으로 쓰레기를 거둔다면 미세플라스틱으로 인한 오염과 독성 등을 줄여 수질을 개선할 수 있고, 쓰레기가 분해되며 생기는 온실가스를 줄여 기후변화에도 영향을 줄 수 있습니다.
 
로봇이 해양쓰레기를 수거하는 모습을 통해 사람들이 환경 문제의 심각성을 느낄수있습니다. 그리고 깨끗해진 해양 환경은 해변 관광지의 가치를 높이고, 지역 경제 활성화에 기여할 수 있습니다.


감사합니다! 🙌
