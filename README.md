# TESTuDO
##update note
v0.2.1

![image](http://ref.comgal.info/data/cgref_4/%EC%9D%B4%EB%AF%B8%EC%A7%80_17.png)

* UI 개선
    + 병사 회전 - 병사 회전 버튼이 더 크고 직관적으로 변경되었습니다.
    + 주사위 - 공격 시 자신의 공격력(주사위 굴림 결과)이 시각적으로 표시됩니다.
    + 최대 공격력 - 최대 공격력이 구슬에서 더 읽기 편한 글씨로 변경되었습니다.
    + 턴 - 현재 플레이어의 턴이 죄측 상단에 표시됩니다.
    + 식량 - 현재 플레이어의 식량만 표시되게 변경되었습니다.

* 그래픽 개선
    + 유닛 - 병사 그래픽이 완전히 변경되었습니다. 이번 변화로 병사의 방향과 진형을 파악하기가 쉬워집니다.
    + 배경 - 인게임 배경화면이 변경되었습니다.
    + 타일 - 본진 타일의 그래픽이 더 멋있게 변경되었습니다.
    + 시작화면 - 시작화면의 모습이 완전히 새로워졌습니다.

* 사운드 개선
    + 배경음악 - 인게임 배경음악이 변경되었습니다. 이제 함성이 사라졌습니다..



v0.2.0 - [다운로드(분할1)](http://ref.comgal.info/data/cgref_4/v0.0.2.zip "다운로드") / [다운로드(분할2)](http://ref.comgal.info/data/cgref_4/v0.0.2.z01 "다운로드")
![image](http://ref.comgal.info/data/cgref_4/%EC%9D%B4%EB%AF%B8%EC%A7%80_17.png)

* 기본 조작법
    + 병사 생성 - 배럭 클릭 후 주변 타일 클릭(forest로의 생성과 이동은 식량 2 소모)
    + 병사 회전 - 병사 클릭 후 회전 버튼 클릭
    + 병사 이동 - 병사 클릭 후 가고자 하는 방향으로 맞춰준 후 주변 타일 클릭
    + 병사 공격 - 병사 클릭 후 가고자 하는 방향으로 맞춰준 후 주변 타일(적 병사가 올라가있는) 클릭

* UI 업데이트
    + 전반적인 UI를 로마 느낌으로 바꾸었습니다.
    + 병사 선택시 표시기, 선택가능행동 표시기가 추가되었습니다.
    + 병사 회전 버튼이 추가되었습니다. 기존 우클릭 회전은 삭제하였습니다.
    + 설정(메뉴)버튼을 눌러 설정페이지를 띄울 수 있습니다.
    + 설정 페이지에서 메인메뉴로 돌아갈 수 있게 되었습니다.
    + 설정 페이지에서 배경음악을 끌 수 있게 되었습니다.(!)
* 인게임 그래픽, 애니메이션 업데이트
    + 배경화면이 용암으로 바뀌었습니다.
    + 병사들의 공격력이 텍스트 대신 그림으로 표시됩니다.
    + 타일 그래픽이 업그레이드 되었습니다.
    + 이제 용암이 분출할 때 애니메이션이 표시됩니다.
* 조작 개선
    + 타일클릭 판정이 더 직관적으로 바뀌었습니다.
* 공격력 표시 동기화
    + 이제 병사들의 공격력이 상황에 맞게 표시됩니다.


v0.1.0 - [다운로드](http://me2.do/GIcd2ycg "다운로드")
![image](http://ref.comgal.info/data/cgref_4/1449499247/%EC%9D%B4%EB%AF%B8%EC%A7%80_1.png)

* 기본 조작법
    + 병사 생성 - 배럭 클릭 후 주변 타일 클릭(forest로의 생성과 이동은 식량 2 소모)
    + 병사 회전 - 병사 클릭 후 가운데클릭(반시계), 우클릭(시계)
    + 병사 이동 - 병사 클릭 후 가고자 하는 방향으로 맞춰준 후 주변 타일 클릭
    + 병사 공격 - 병사 클릭 후 가고자 하는 방향으로 맞춰준 후 주변 타일(적 병사가 올라가있는) 클릭

* UI 업데이트
    + ToggleTurn 버튼을 End Turn 버튼으로 교체하였습니다.
* 애니메이션, 이펙트 추가
    + 이제 병사가 공격에 실패하여 방어자가 공격하는 애니메이션이 모두 표시됩니다.
    + 이제 병사가 유효타격을 받으면 타격이펙트가 표시됩니다.
    + 이제 병사가 죽을 때 죽는 애니메이션이 나옵니다.
    + 이제 식량을 수확할 때 멋진 애니메이션이 표시됩니다.
* 자연스러운 자연스러움
    + 이제 병사가 평소에도, 이동중, 공격중에도 화산이나 건물 등에 가려집니다.
    + 이제 화산폭발 이벤트도 하나씩 자연스럽게 터집니다. 다른 이벤트들과도 앞뒤가 맞습니다.
* 중요 버그픽스
    + 이동할 때 한번에 안되고 여러번 클릭해야 하던 문제가 해결되었습니다.
* 게임 종료시 메인화면으로 가기
    + 게임 종료시 메인화면으로 돌아갈 수 있습니다.
    + 메인화면으로 돌아갔다가 다시 새 게임을 시작할 수 있습니다.
* 내부 프레임워크 개선
    + 병사와 타일에서 shared_ptr을 제거하고 cocos2d-x 자체 메모리 관리 시스템을 따릅니다.

v0.0.9 - [다운로드](http://me2.do/xHqaB2sj "다운로드")
![image](http://ref.comgal.info/data/cgref_4/1448898153/%EC%9D%B4%EB%AF%B8%EC%A7%80_3.png)

* 기본 조작법
    + 병사 생성 - 배럭 클릭 후 주변 타일 클릭(forest로의 생성과 이동은 식량 2 소모)
    + 병사 회전 - 병사 클릭 후 가운데클릭(반시계), 우클릭(시계)
    + 병사 이동 - 병사 클릭 후 가고자 하는 방향으로 맞춰준 후 주변 타일 클릭
    + 병사 공격 - 병사 클릭 후 가고자 하는 방향으로 맞춰준 후 주변 타일(적 병사가 올라가있는) 클릭

* UI 업데이트
    + 턴 종료 버튼을 공식 UI에 집어넣었으며, 식량 표시가 제대로 동기화 됩니다.
    + 이제 공격하거나 이동할 때, 또 병력을 생산할 때 선택 가능한 타일을 노란 색으로 표시해줍니다. (80% 구현)
    + 병사 옆에 현재의 공격력이 표시됩니다.
* 공격 애니메이션 구현
    + 이제 병사가 공격할 때, 한번에 없어져버리는 것이 아니라 칼을 휘두르며 공격합니다.
* 배경음악 추가
    + 메인 화면, 게임 화면에 배경음악을 깔았습니다.
* 배경화면 추가
    + 메인 화면, 게임 화면에 배경화면을 깔았습니다.
* 내부 프레임워크 개선
    + shared_ptr을 전체적으로 적용했습니다.

v0.0.8 - [다운로드](http://me2.do/FIvMeVL7 "다운로드")

* 기본 조작법
    + 병사 생성 - 배럭 클릭 후 주변 타일 클릭(forest로의 생성과 이동은 식량 2 소모)
    + 병사 회전 - 병사 클릭 후 가운데클릭(반시계), 우클릭(시계)
    + 병사 이동 - 병사 클릭 후 가고자 하는 방향으로 맞춰준 후 주변 타일 클릭
    + 병사 공격 - 병사 클릭 후 가고자 하는 방향으로 맞춰준 후 주변 타일(적 병사가 올라가있는) 클릭
* 전투 기능 완성
    + 옆구리 보너스, 지형 보너스를 추가했습니다.
    + 공격 대형 설정이 제대로 되지 않던 문제를 수정했습니다.
    + 전투시 걷고, 죽고, 돌고, 모두 한프레임 내에 끝나버리던 것을 고쳐서 이제는 천천히 모든 과정을 보여줍니다.
* UI 업데이트
    + 이제 각 플레이어가 가지고 있는 식량이 나옵니다.
* 이벤트 시스템 구축
    + 모든 이벤기능트를 HistoryEvent화 해서 로직과 보여주는 부분을 구분할 수 있게 되었습니다.
* 게임 종료 조건 기능 
    + 상대방의 본진을 점령하면 게임에서 승리합니다.
* 화산 기능 추가
    + [공식 룰](https://github.com/atgchan/2015_GaeKyungPu/wiki/2015.10.21-2%EC%B0%A8-%EA%B0%9C%EC%A0%95-%EA%B3%B5%EC%8B%9D-%EA%B2%8C%EC%9E%84-%EB%A3%B0#%ED%99%94%EC%82%B0-%ED%8F%AD%EB%B0%9C "공식 룰")에 있는 내용대로 화산 기능을 구현하였습니다.


v0.0.7 - [다운로드](http://me2.do/G3b74uOs "다운로드")
http://ref.comgal.info/data/cgref_4/1448898153/%EC%9D%B4%EB%AF%B8%EC%A7%80_3.png
![image](http://ref.comgal.info/data/cgref_4/1447699508/%EC%9D%B4%EB%AF%B8%EC%A7%80_1.png)

* 전투 기능 추가
    + 공식 룰에 있는 로직 그대로 전투를 수행합니다. (아직 옆구리 보너스, 지형 보너스는 미구현)
    + 공격 대형, 방어 대형, 백업을 구현하였습니다.
    + 공격은 식량 1을 소모합니다.
* 병사 그래픽 업데이트
    + 유명 아티스트 Jsfumato님의 새로운 픽셀아트를 대대적으로 반영하였습니다.
* 애니메이션 추가
    + 병사가 걸어갈 때, 대기할 때 애니메이션 효과가 구현되었습니다.
* 병력 회전 기능 수정
    + 우클릭으로 시계방향 회전, 가운데 클릭으로 반시계방향 회전을 할 수 있습니다.
    + 플레이어는 이제 자신의 병사만 회전할 수 있습니다.
* 입력 제한 기능 추가
    + 이제 플레이어는 하나의 액션이 끝날 때까지는 클릭 입력을 할 수 없습니다.
* 이동 제한 기능 추가
    + 이제 병사를 호수 타일과 용암 타일, 화산 타일로 이동시킬 수 없습니다.
* 주사위 기능 추가
   + DiceDice클래스를 이용해서 주사위를 굴려 로직에 써먹을 수 있게 되었습니다.
* 프레임워크 개편 시작
    + battle 로직을 밖으로 빼고, 애니메이션 매니저도 만들고...


v0.0.6

* 식량 현황 보기 추가
    + TAB키를 눌러서 각 플레이어의 식량 현황을 볼 수 있습니다.
* FOREST 타일 기능 추가
    + 생산 또는 이동시, FOREST TILE로는 2 이상의 식량을 소모하여 이동합니다.
    
v0.0.5

* 병력 생산 기능
    + 자신의 배럭을 클릭하여 병사를 생산할 수 있습니다.
    + 새로 생산한 병사의 방향은 배럭에서 나가는 방향으로 자동으로 설정됩니다.
    + 병사를 생산하기 위해서는 식량을 소모해야 합니다.
* 병력 회전 기능
    + 병사을 우클릭 함으로써 시계방향으로 회전시킬 수 있습니다.
* 병력 삭제 기능
    + 유닛을 가운데 클릭하여 삭제할 수 있습니다.(추후 삭제 예정)
* 턴 전환 기능
    + (test 용)턴 전환 버튼 클릭 시 비프음이 출력되어 전환되었음을 확인할 수 있습니다.
    + 게임 화면에서 턴 전환 버튼을 클릭하여, 상대방에게 턴을 넘길 수 있습니다.
* 수확 페이즈 추가
    + 수확 페이즈에 자동으로 식량이 들어옵니다.
    + 옥토 기능을 추가하였습니다. 수확 페이즈에 옥토 위에 자신의 병사가 있다면 식량을 추가획득합니다.
* 점령 페이즈 추가
    + 점령 페이즈에 자신의 병사가 미점령 타일에 서있다면 점령합니다.
    + 마을을 점령하면 배럭을 자동으로 지으며, 새로 지은 배럭에서도 병사를 생산할 수 있습니다.
