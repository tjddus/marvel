# MARVEL

### 프로젝트 동기
  워낙 모바일 게임인 ‘모두의 마블’을 즐겨했고, 컴퓨터 언어인 C++을 공부하면서 과제로 했던 검 강화하기처럼 개인의 돈을 쓰고 다시 벌면서 했던 부분을 응용하여서 ‘부루마블’과 같은 보드게임도 내가 스스로 짜보고 싶다는 마음에 이 프로젝트를 선정하게 되었습니다.


### 문제 정의
  1) **프로젝트 목표** <br>
    2인/3인/4인의 player가 주사위를 굴려서 땅을 사고 팔고 서로의 땅을 인수하면서 라인 독점을 만들거나 턴이 다 종료될 때까지 자신의 돈이 다른 사람의 돈보다 더 많아 승리하는 게임을 만드는 것이다.

  2) **프로젝트 요구사항** <br>
    - player 수에 따라서 게임을 진행할 수 있는 요소, 각 player의 재산과 특징을 나타내는 요소<br>
    - 게임의 승리(라인 독점, 턴 종료 시 부자), 패배(파산)로 인한 게임의 결과<br>
    - 게임의 보드판에 여러 여름 휴양지나 캐시 게임과 같은 특정 게임이나 특징 있는 부분을 칸에 집어넣는 요소<br>
    - 각 player가 주사위를 굴렸을 때, 랜덤하게 수가 나오는 요소<br>
    - 각 player의 돈을 지불하여 그 칸의 건물을 사거나 팔 때 건물이 지어지는 요소<br>
    - 다른 player의 땅에 도착했을 때, 통행료를 지불하고 그 땅을 인수할 수 있는 요소<br>

### 프로젝트 내용
  1) **개발언어**
      C++
  2) **개발도구**
      visual studio 2017
  3) **시나리오 흐름**
      1) "MARVEL 제작: 황킴" 화면
      2) 플레이어의 수를 정하기(2-4명)
      3) 플레이어 수에 따른 플레이어의 돈을 화면에 출력
      4) 시작점에서 시작하여 플레이어가 차례대로 주사위를 던진다.
      5) 일반적인 도시 칸에 플레이어가 도착하게 되면 일반행동
      6) 무인도에서의 3턴을 기다리는데 주사위가 더블이면 탈출가능
      7) CASHGAME에서 컴퓨터와 플레이어가 각자 주사위를 던져서 승리하면 돈을 얻는 게임이다.
      8) 카지노에서 플레이어가 1-20사이에 4개를 입력하여 컴퓨터가 가지는 임의의 4개의 숫자와 비교하여 같은 만큼 돈을 받는다.
      9) 세계여행에서 원하는 여행지를 사용자가 입력하여 그 곳으로 갈 수 있게 하고 시작점에서는 자신의 땅에 건물을 지을수 있다.
      <img src ="https://user-images.githubusercontent.com/30233659/111040316-ca990c80-8475-11eb-8d84-6ac340c029e5.png" width="50%" height="50%">

  4) **결과**<br>
    1. **마블 판** <br> 실제 플레이어가 보는 초기 마블 판이다. <br>
       <img src="https://user-images.githubusercontent.com/30233659/110432845-0a1ccd00-80f3-11eb-89be-d2c90e63089d.png" width="50%" height="50%"><br>
    3. **player표시 판**<br> 2 ~ 4인에 해당하는 player의 이름과 재산 상태를 계기판처럼 볼 수 있다. <br>
      <img src ="https://user-images.githubusercontent.com/30233659/110432879-17d25280-80f3-11eb-9974-e7cab04935d4.png" width="10%" height="10%"><br>
    3. **플레이어의 위치 변화**<br> 플레이어는 굴려서 나온 주사위의 눈의 수 만큼 이동한다. <br>
      <img src ="https://user-images.githubusercontent.com/30233659/110432924-27519b80-80f3-11eb-8c9c-09774d96870b.png" width="50%" height="50%"><br>
    4. **주사위 던지기**<br> 플레이어는 1 ~ 6에 해당하는 수를 랜덤하게 받는다. <br>
      <img src ="https://user-images.githubusercontent.com/30233659/110432969-36384e00-80f3-11eb-8d10-2d94c0f0180a.png" width="30%" height="30%"><br>
    5. **건물사기**<br> 플레이어는 초기 땅에 건물을 살 수 있다 <br>
      <img src ="https://user-images.githubusercontent.com/30233659/110432995-42bca680-80f3-11eb-84ef-f568e845c63d.png" width="30%" height="30%"><br>
    6. **랜드마크 건설**<br> 플레이어는 주택, 빌딩, 호텔까지 모든 건물이 존재할 경우 랜드마크를 건설할 수 있다. <br>
      <img src ="https://user-images.githubusercontent.com/30233659/110433038-4d773b80-80f3-11eb-86ec-91876bf18c3e.png" width="30%" height="30%"><br>
    7. **캐시게임**<br> 플레이어가 캐시게임에 도착하는 경우 랜덤하게 4자리수를 입력한다. <br>
      <img src ="https://user-images.githubusercontent.com/30233659/110433066-57993a00-80f3-11eb-803d-3c87e09bc91b.png" width="30%" height="30%"><br>
    8. **시작점**<br> 플레이어는 시작점에서 돈을 받으며, 원하는 자신의 땅에 랜드마크를 건설할 수 있다. <br>
      <img src ="https://user-images.githubusercontent.com/30233659/110433176-77306280-80f3-11eb-9219-a4a790a940ad.png" width="30%" height="30%"><br>
    9. **세계여행**<br> 플레이어는 세계여행 턴에서 자신이 원하는 땅으로 이동할 수 있다. <br>
      <img src ="https://user-images.githubusercontent.com/30233659/110433219-80b9ca80-80f3-11eb-81ae-5887a2191348.png" width="30%" height="30%"><br>
    10. **플레이어 파산**<br> 플레이어는 파산 시 게임에서 지게 된다. <br>
       <img src ="https://user-images.githubusercontent.com/30233659/110433283-96c78b00-80f3-11eb-88a4-40068aca5f23.png" width="10%" height="10%"><br>

  
    

