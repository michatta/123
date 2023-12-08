LMS2차 장하경
21700634_

이동녘 — 2023.11.14. 오전 9:18
이미지
류홍걸 — 2023.11.14. 오후 2:44
https://doc.qt.io/qtforpython-5/PySide2/QtWidgets/QTabWidget.html
류홍걸 — 2023.11.15. 오전 11:31
https://pythonpyqt.com/pyqt-button/
PyQt button example (Python GUI) | Learn Python PyQt
QAbstractButton acts as an abstract class and provides the general functionality of a button, push button and checkable button. Selectable button implementations are QRadioButton and QCheckBox; pre
류홍걸 — 2023.11.15. 오후 12:08
https://newbie-developer.tistory.com/107
끝까지 파고드는 임베디드 개발자- 존버매니아
파이썬. 외부파일의 변수 함수 클래스 참조(import from)
외부 파일에 정의된 변수,함수, 클래스를 활용하는 방법 쓰는 방법이 몇가지 있음 핵심 키워드는 import , from 아래 예시의 경우 temp_blog.py 에 정의된 내용을 temp_blog1.py에서 사용하려는 상황임 #temp_blog.py test_var = 123 def test_fun(data1,data2): sum=data1 + data2 class test_class(): def __init__(self): self.mul=0 def test_method(self,data1 ,data2): self.mul = data1 * data2 1. import temp_blog 라고 선언 후 temp_bl...
파이썬. 외부파일의 변수 함수 클래스 참조(import from)
류홍걸 — 2023.11.15. 오후 4:01
https://www.pythonguis.com/faq/real-time-change-of-widgets/
Python GUIs
Real Time Change of Widgets?
How to update the UI while in a loop. Bentraje wrote Hi, I'm trying to create a simple class recitation app where it randomly picks from the list of students.
Real Time Change of Widgets?
타이머
류홍걸 — 2023.11.15. 오후 7:05
self.selectedList = self.listWidget_Test.selectedItems()
        for i in self.selectedList :
            print(i.text())
류홍걸 — 2023.11.16. 오전 10:57
widget = self.parent()
        widget.setCurrentIndex(1)
        widgetList = widget.children()
        widgetList[3].stackedWidget.setCurrentIndex(1)
류홍걸 — 2023.11.16. 오전 11:56
https://newbie-developer.tistory.com/148
끝까지 파고드는 임베디드 개발자- 존버매니아
PyQt TableWidget (심화2) table pushbutton,combobox 등등 넣기
테이블의 셀에 PushButton, ComboBox,LineEdit 등등 넣기(기본) 테이블의 특정 셀에 존재하는 아이템에 접근 테이블의 셀에 PushButton 넣어서 사용하기(응용,심화) Table에 유저가 데이터 입력할 때, 입력값 제한하기 테이블의 셀에 PushButton, ComboBox,LineEdit 등등 넣기(기본) 여태까지는 셀에 문자열 데이터만 넣어봤는데 셀에다 버튼 등도 넣을 수가 있다. 아래 메소드를 사용하면 된다. def setCellWidget(self, row: int, column: int, widget: QWidget) -> None: ... 참고로, 테이블의 특정 셀에 존재하는 아이...
PyQt TableWidget (심화2) table pushbutton,combobox 등등 넣기
류홍걸 — 2023.11.16. 오후 12:16
첨부 파일 형식: archive
tableEx.zip
813 bytes
류홍걸 — 2023.11.16. 오후 3:09
https://gj.korchamhrd.net/co
류홍걸
 님이 
과제제출
 스레드를 시작하셨어요(
스레드
 모두 보기).
 — 2023.11.17. 오전 10:45
스레드
과제제출
메시지 3개 ›
류홍걸
20일 전
류홍걸 — 2023.11.17. 오후 12:15
https://kibua20.tistory.com/13
모바일 SW 개발자가 운영하는 블로그
[Tips] 우분투 화면 캡쳐 및 화면 녹화
1. 화면 캡쳐 우분투에서 화면 캡쳐 단축키는 3개만 있으면 해결된다. 클립보드로 *전체 화면* 스크린샷 복사 : Ctrl + PrintScn 클립보드로 *활성화 상태의 창* 스크린샷 복사: Ctrl + Alt + PrintScn 클립보드로 *선택 영역* 스크린샷 복사: Shift + Ctrl + PrintScn * 출처: https://playthegame00.tistory.com/38 2. 화면 녹화 화면 녹화 시작 : Ctrl+Alt+Shift+R 녹화 종료할때 도 동일하게 Ctrl+Alt+Shift+R 녹화를 시작하면 오른쪽 화면 상단에 레코딩 아이콘 표시됨. 본인 계정의 Home 의 Video 폴더에 저장...
[Tips] 우분투 화면 캡쳐 및 화면 녹화
작동화면도 영상으로 녹화합시다
LMS2차 정광선 — 2023.11.17. 오후 2:02
itemsTextList =  [str(listWidget.item(i).text()) for i in range(listWidget.count())]
류홍걸 — 2023.11.20. 오전 10:36
영상 여기에 올려볼까요
각 조
LMS2차 박상호 — 2023.11.20. 오전 10:36
6조
LMS2차 조병훈 — 2023.11.20. 오전 10:36
LMS2차 이수빈 — 2023.11.20. 오전 10:38
1조입니다
LMS2차 장준호 — 2023.11.20. 오전 10:39
4조입니다
LMS2차 박승범 — 2023.11.20. 오전 10:45
2조영상입니다
LMS2차 김다능 — 2023.11.20. 오전 11:06
[
    //컴파일
    { "key": "ctrl+alt+c", "command": "workbench.action.tasks.build" },

    //실행
    { "key": "ctrl+alt+r", "command": "workbench.action.tasks.test" }
]
류홍걸 — 2023.11.20. 오후 2:04
첨부 파일 형식: acrobat
1120.pdf
23.44 KB
LMS2차 김다능 — 2023.11.20. 오후 2:52
이미지
류홍걸 — 2023.11.21. 오후 12:23
https://cafe.naver.com/startdev 이름LMS2차로 가입안하시분은 가입해주세요
류홍걸 — 2023.11.21. 오후 2:04
이미지
Team Study!
1.파트분배해서 서로 설명하기
2.파이썬에서 했던 과제 C언어로 다시하기(다시 올려드림)
3.교재 10장 문제 풀고 설명하기
4.기간은 화수목 or 수목금 
5.장소는 현 교실 이용 또는 정규수업시간 이후 빈교실 이용
류홍걸 — 2023.11.21. 오후 4:47
첨부 파일 형식: acrobat
studyReport.pdf
1.30 MB
류홍걸 — 2023.11.22. 오후 2:15
Team Study!
1.3~12장까지 파트분배해서 서로 설명하기(교재 문제 포함)

2.파이썬에서 했던 과제 C언어로 다시하기(다시 올려드림)
   ->LMS 사이트에 올라온 문제들
3.교재 10장 문제 풀고 설명하기

4.기간은 화수목 or 수목금 

5.장소는 현 교실 이용 또는 정규수업시간 이후 빈교실 이용

6.학습일지(오늘 공부한 내용, 참여인원...등등) LMS사이트에 제출
https://gjlms.korchamhrd.net/
류홍걸 — 2023.11.22. 오후 2:41
#include <unistd.h>
sleep(60);
LMS2차 양수철 — 2023.11.22. 오후 5:55
학습일지 대충 만들어봤는데 필요하신 분 수정해서 사용하세여
첨부 파일 형식: unknown
8c348baa0004e50e.odt
16.95 KB
boki — 2023.11.24. 오전 7:55
오늘오후에 카페열어줄께요
류홍걸 — 2023.11.24. 오전 9:23
넵
류홍걸 — 2023.11.28. 오전 9:08
@LMS2차 손웅철 아아 수신확인
LMS2차 손웅철 — 2023.11.28. 오전 9:09
들립니다.
류홍걸 — 2023.11.28. 오후 3:05
이미지
류홍걸 — 2023.11.28. 오후 8:50
https://www.youtube.com/watch?v=vIhEkX4Cfjo
YouTube
국주옥 프로젝트
오프닝 - 로비 - 1층이동
이미지
https://www.youtube.com/watch?v=dE9zxn6YzrI
YouTube
국주옥 프로젝트
잡몹 전투
이미지
류홍걸 — 2023.11.28. 오후 8:58
https://www.youtube.com/watch?v=zl6oJIG4JEU
YouTube
김성훈
배산- 지호의 대모험 -풀려버린 봉인편-
이미지
류홍걸 — 2023.11.29. 오전 9:21
https://www.youtube.com/watch?v=0TNlvb7FKkY
YouTube
정재환
LMS 7팀 실행영상 2
이미지
류홍걸 — 2023.11.29. 오전 11:43
https://wepplication.github.io/tools/asciiArtGen/
아스키아트 변환 사이트
텍스트 및 이미지(URL,파일첨부)를 아스키코드로 만드는 아스키아트 생성 사이트
이미지
LMS2차 정현승 — 2023.12.04. 오전 11:42
인공지능 기반 서비스 플랫폼 개발자 클릭(E-캠퍼스 STORY 아님)
이미지
이미지
설문하기 클릭
류홍걸 — 2023.12.04. 오후 12:42
설문ㄱㄱ
류홍걸 — 2023.12.05. 오후 12:05
https://kldp.org/node/69051
LMS2차 손웅철 — 2023.12.05. 오후 12:51
이미지
류홍걸 — 어제 오후 7:26
{
    "version": "2.0.0",
    "runner": "terminal",
    "type": "shell",
    "echoCommand": true,
    "presentation": {
확장
123.txt
3KB
류홍걸 — 오늘 오전 9:26
이미지
단톡방 초대링크
LMS2차 정현승 — 오늘 오전 10:22
누추한 코드 베타테스터 모집합니다 dm주세요
LMS2차 정수연 — 오늘 오전 10:36
🙏
LMS2차 장하경 — 오늘 오전 10:37
커피 사주나요?
LMS2차 양수철 — 오늘 오전 10:44
버그 발견하신 분께 소정의 상품을 드리겠습니다.
이미지
LMS2차 장하경 — 오늘 오전 10:45
저 할래요
LMS2차 이지우 — 오늘 오전 10:58
상품주세요
LMS2차 정현승 — 오늘 오전 11:04
민원이 해결되면 따봉을 드립니다
LMS2차 문홍균 — 오늘 오후 1:55
2조 베타
첨부 파일 형식: archive
2_devsoul_beta1.zip
106.76 KB
c언어 파일은 c_20.c입니다
LMS2차 문홍균 — 오늘 오후 4:52
밸런스 및 오류패치 덮어쓰기 하면 됩니다.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void PrintMap(int map[25][25]);... (14KB 남음)
확장
c_20.c
64KB
﻿
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void PrintMap(int map[25][25]);
void Move(int map[25][25], int user_status[9], int itemBox[3], int *x, int *y, int *temp, int *walk, int *coin);
void OpenDoor(int map[25][25], int *walk);

int Fight(int *sta, int *partner, int *partner1_sta, int *partner2_sta, char *partner_name1, char *partner_name2, int *itemBoxchar, char *enemy_name, char *user_name, int monN, int *coin);
void attack(char *size, int *status, int partNum, int partnerSta1, int partenrSta2, char *partnerName, char *partnerName2, int attack1, char *enemy_name);
void attack_enemy(char *size, int *enemystatus, int enemyattack);
int MadePartner(int *partNum, int **partnerSta1, int **partnerSta2, char *partnerName, char *partnerName2, int *enemySta, char *enemy_name);
void S_attack(char *size, int *status, int partNum, int partnerSta1, int partnerSta2, char *partnerName, char *partnerName2, char *enemy_name);
void Item_Box(char *size, int *itembox, int *Bcount, int *status);
void Status_print(int *status, int *enemystatus, int *partnerNum, char *partnerName, char *partnerName2, int **partner1, int **partner2, char *enemyname, char *username);
int BossFight(int *sta, int *partner, int *partner1_sta, int *partner2_sta, char *partner_name1, char *partner_name2, int *itemBox, char *user_name);
int BossSpecial(void);
void Life_cure(char *size, int *status);
void Mana_cure(char *size, int *status);
void PrintDevmon(char *size, int monsterN);
void Sattack_enemy(char *size, int *enemystatus, char *enemy_name, int num);
void Shop(int *coin, int *status, int *itembox);
void printtext(char *size, int num);

void chapic(int n, int user_status[], char user_name[]);
void ShowPic(char *fp);
int QuizMon1(int score);
int QuizMon2(int score);
int QuizMon3(int score);
void Quiz(int score, int user_status[]);

int main(void)
{
    srand(time(NULL));
    int map[25][25] =
        {
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 6, 6, 6, 6, 6, 1, 2, 2, 2, 2, 2, 1},
            {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 6, 6, 6, 6, 6, 1, 2, 2, 2, 2, 2, 1},
            {1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 6, 6, 6, 6, 6, 1, 2, 2, 1, 2, 2, 1},
            {1, 2, 2, 2, 2, 2, 2, 2, 8, 1, 1, 1, 1, 6, 6, 6, 6, 6, 1, 2, 2, 1, 2, 2, 1},
            {1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 6, 6, 6, 6, 6, 1, 2, 2, 1, 2, 2, 1},
            {1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1, 2, 2, 1, 2, 2, 1},
            {1, 7, 7, 7, 7, 7, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 1},
            {1, 7, 1, 1, 7, 7, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 8, 1, 2, 2, 1},
            {1, 7, 1, 11, 7, 7, 3, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1},
            {1, 7, 1, 1, 7, 7, 3, 2, 2, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1},
            {1, 7, 7, 7, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 10, 1, 0, 1, 1, 1, 1, 1, 1, 1, 3, 3, 1},
            {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 9, 0, 0, 1, 1, 1, 1, 5, 5, 5, 5, 5, 1},
            {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 1, 2, 2, 3, 5, 5, 5, 5, 5, 1},
            {1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 5, 5, 5, 5, 5, 1},
            {1, 2, 2, 1, 8, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 5, 5, 5, 5, 5, 1},
            {1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 5, 5, 5, 5, 5, 1},
            {1, 2, 2, 1, 2, 2, 1, 1, 1, 3, 3, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1},
            {1, 2, 2, 1, 2, 2, 1, 4, 4, 4, 4, 4, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
            {1, 2, 2, 1, 2, 2, 1, 4, 4, 4, 4, 4, 1, 1, 1, 1, 8, 2, 2, 2, 2, 2, 2, 2, 1},
            {1, 2, 2, 1, 2, 2, 1, 4, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1},
            {1, 2, 2, 2, 2, 2, 1, 4, 4, 4, 4, 4, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1},
            {1, 2, 2, 2, 2, 2, 1, 4, 4, 4, 4, 4, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

    char *place[8] = {"급식실", "벽", "복도", "문", "iot반", "드론융합실", "생산정보시스템실", "교수실"};
    char *monster[22] = {"현승몬", "규비몬", "수정몬", "수빈몬", "수연몬", "다능몬", "세정몬", "광선몬", "웅철몬", "인희몬", "하경몬", "민형몬", "병훈몬", "주현현몬", "용민몬", "홍균몬", "준호몬", "상호몬", "수철몬", "지우몬", "승범몬"};
    int user_status[9] = {1000, 50, 200, 270, 0, 000, 50, 1, 4};
    int itemBox[3] = {2, 2, 0};
    char *partner_name2 = " ";
    char *partner_name1 = " ";
    int partner = 0, partner1Sta = 1, partner2Sta = 1;
    char user_name[50];
    int coin = 100;
    char art[2000];

    int x = 12, y = 13;

    char input;
    int temp = 0;
    int walk = 0;
    int choose;

    int score = 0;
    int a;

    printtext(art, 7);
    printf("기본공격: 절반값~최대치까지 랜덤 공격\n특수공격: 고정값\n동료공격:1~최대치\n문은 50걸음 마다 열림(교수실은900)\n");
    printf("시작하시겠습니까? 1. 시작 2. 종료 ");
    scanf("%d", &a);
    system("clear");

    chapic(a, user_status, user_name);
    system("clear");

    while (1)
    {
        PrintMap(map);

        if (temp == 2 && (rand() % 100) < 15)
        {
            printf("야생의 개발몬이 튀어나왔다!\n");
            sleep(1);
            system("clear");
            int enemy = rand() % 21;
            char *enemy_name = monster[enemy];
            int Fc = Fight(user_status, &partner, &partner1Sta, &partner2Sta, partner_name1, partner_name2, itemBox, enemy_name, user_name, enemy, &coin);
            switch (Fc)
            {
            case 0:
            {
                user_status[0] = user_status[5];
                user_status[1] = user_status[6];
                map[y][x] = temp;
                temp = 0;
                x = 12, y = 13;
                map[y][x] = 9;
            }
            break;
            case 1:
                partner_name1 = enemy_name;
                break;
            case 2:
                partner_name2 = enemy_name;
            default:
                break;
            }
            system("clear");
            PrintMap(map);
        }
        else if (temp == 4 && rand() % 9 <= 0)
        {
            printf("iot반의 퀴즈단 리북녘이 승부를 걸어왔다!\n");
            sleep(1);
            system("clear");
            score = QuizMon1(score);
            Quiz(score, user_status);
            sleep(1);
            system("clear");
            PrintMap(map);
            if (score == 3 && map[22][12] == 3)
            {
                printf("쿠---쿵!!!\n");
                sleep(1);
                map[22][12] = 2;
                map[23][12] = 2;
                system("clear");
                PrintMap(map);
                printf("iot반의 문이 열렸다!\n");
                sleep(1);
            }
            system("clear");
            PrintMap(map);
            score = 0;
        }
        else if (temp == 5 && rand() % 9 <= 0)
        {
            printf("드론융합실의 퀴즈단 최하문이(가) 승부를 걸어왔다!\n");
            sleep(1);
            system("clear");
            score = QuizMon2(score);
            Quiz(score, user_status);
            sleep(1);
            system("clear");
            PrintMap(map);
            if (score == 3 && map[12][22] == 3)
            {
                printf("쿠---쿵!!!\n");
                sleep(1);
                map[12][22] = 2;
                map[12][23] = 2;
                system("clear");
                PrintMap(map);
                printf("드론융합실의 문이 열렸다!\n");
                sleep(1);
            }
            system("clear");
            PrintMap(map);
            score = 0;
        }
        else if (temp == 6 && rand() % 9 <= 0)
        {
            printf("생산정보시스팀실의 퀴즈단 류청걸이(가) 승부를 걸어왔다!\n");
            sleep(1);
            system("clear");
            score = QuizMon3(score);
            Quiz(score, user_status);
            sleep(1);
            system("clear");
            PrintMap(map);
            if (score == 3 && map[1][12] == 3)
            {
                printf("쿠---쿵!!!\n");
                sleep(1);
                map[1][12] = 2;
                map[2][12] = 2;
                system("clear");
                PrintMap(map);
                printf("생산정보시스템실의 문이 열렸다!\n");
                sleep(1);
            }
            system("clear");
            PrintMap(map);
            score = 0;
        }
        else if (temp == 11)
        {
            int BFc = BossFight(user_status, &partner, &partner1Sta, &partner2Sta, partner_name1, partner_name2, itemBox, user_name);
            switch (BFc)
            {
            case 0:
            {
                user_status[0] = user_status[5];
                user_status[1] = user_status[6];
                map[y][x] = 11;
                temp = 0;
                x = 12, y = 13;
                map[y][x] = 9;
            }
            case 10:
                system("clear");
                printtext(art, 8);
                printf("수료하였습니다!!!\n");
                break;
            default:
                break;
            }
            system("clear");
            PrintMap(map);
        }

        OpenDoor(map, &walk);

        printf("----------------------------------상태창-----------------------------------\n");
        printf("이름: %s    레벨: %d    경험치: %d/%d    걸음: %d     위치: %s\nHP: %d / %d    MP: %d / %d    공격력: %d    특수공격력: %d\n\n", user_name, user_status[7], user_status[4], user_status[8], walk / 2, place[temp], user_status[0], user_status[5], user_status[1], user_status[6], user_status[2], user_status[3]);
        printf("----------------------------------동료창-----------------------------------\n");
        printf("이름: %s    공격력: %d\n이름: %s    공격력: %d\n\n", partner_name1, partner1Sta, partner_name2, partner2Sta);
        printf("----------------------------------도구창-----------------------------------\n");
        printf("회복약: %d개    마나회복약: %d개    \n골드: %d\n\n", itemBox[0], itemBox[1], coin);
        printf("----------------------------------입력창-----------------------------------\n");
        printf("이동커맨드 'w':↑ , 'a':← , 's':↓ , 'd':→            *교실에서는 천천히*\n도구커맨드 'u':회복약, 'i':마나회복약\n'p': 상점\n\n입력: ");
        Move(map, user_status, itemBox, &x, &y, &temp, &walk, &coin);

        system("clear");
    }

    return 0;
}

void PrintMap(int map[25][25])
{
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            if (map[i][j] == 0)
                printf("   ");
            else if (map[i][j] == 1)
                printf("🟫 ");
            else if (map[i][j] == 2)
                printf("   ");
            else if (map[i][j] == 3)
                printf("🚪 ");
            else if (map[i][j] == 4)
                printf("   ");
            else if (map[i][j] == 5)
                printf("   ");
            else if (map[i][j] == 6)
                printf("   ");
            else if (map[i][j] == 7)
                printf("   ");
            else if (map[i][j] == 8)
                printf("🎁 ");
            else if (map[i][j] == 9)
                printf("🙅 ");
            else if (map[i][j] == 10)
                printf("👳 ");
            else if (map[i][j] == 11)
                printf("🤴 ");
        }
        printf("\n");
    }
}

void Move(int map[25][25], int user_status[9], int itemBox[3], int *x, int *y, int *temp, int *walk, int *coin)
{
    char input;
    scanf(" %c", &input);

    while (getchar() != '\n')
        ;

    map[*y][*x] = *temp;
    switch (input)
    {
    case 'w':
        if (map[*y - 1][*x] != 1 && map[*y - 1][*x] != 3)
        {
            (*y)--;
        }
        if (*walk < 300)
        {
            (*walk) += 2;
        }
        else
        {
            (*walk) += 8;
        }
        break;
    case 's':
        if (map[*y + 1][*x] != 1 && map[*y + 1][*x] != 3)
        {
            (*y)++;
        }
        if (*walk < 300)
        {
            (*walk) += 2;
        }
        else
        {
            (*walk) += 8;
        }
        break;
    case 'a':
        if (map[*y][*x - 1] != 1 && map[*y][*x - 1] != 3)
        {
            (*x)--;
        }
        if (*walk < 300)
        {
            (*walk) += 2;
        }
        else
        {
            (*walk) += 8;
        }
        break;
    case 'd':
        if (map[*y][*x + 1] != 1 && map[*y][*x + 1] != 3)
        {
            (*x)++;
        }
        if (*walk < 300)
        {
            (*walk) += 2;
        }
        else
        {
            (*walk) += 8;
        }
        break;
    case 'u':
        system("clear");
        map[*y][*x] = 9;
        PrintMap(map);
        map[*y][*x] = *temp;
        if (itemBox[0] >= 1)
        {
            user_status[0] += (user_status[5] / 2);
            if (user_status[0] > user_status[5])
            {
                user_status[0] = user_status[5];
            }
            itemBox[0] -= 1;
            printf("회복약을 사용했다!\n");
        }
        else
        {
            printf("회복약을 가지고 있지 않다!\n");
        }
        sleep(1);
        break;
    case 'i':
        system("clear");
        map[*y][*x] = 9;
        PrintMap(map);
        map[*y][*x] = *temp;
        if (itemBox[1] >= 1)
        {
            user_status[1] += (user_status[6] / 2);
            if (user_status[1] > user_status[6])
            {
                user_status[1] = user_status[6];
            }
            itemBox[1] -= 1;
            printf("마나회복약을 사용했다!\n");
        }
        else
        {
            printf("마나회복약을 가지고 있지 않다!\n");
        }
        sleep(1);
        break;
    case 'p':
        Shop(coin, user_status, itemBox);
        break;
    default:
        printf("올바른 입력이 아닙니다.\n");
    }

    *temp = map[*y][*x];

    if (*temp == 8)
    {
        system("clear");
        *temp = 2;
        map[*y][*x] = 9;
        PrintMap(map);
        int rand_item = rand() % 10;
        int rand_item2 = rand() % 10;
        if (rand_item == 0 || rand_item == 1 || rand_item == 2)
        {
            if (rand_item2 <= 2)
            {
                itemBox[0] += 1;
                printf("회복약 1개를 획득하였다!\n");
                sleep(1);
            }
            else if (rand_item2 >= 3 && rand_item2 <= 5)
            {
                itemBox[0] += 2;
                printf("회복약 2개를 획득하였다!\n");
                sleep(1);
            }
            else if (rand_item2 >= 6 && rand_item2 <= 7)
            {
                itemBox[0] += 3;
                printf("회복약 3개를 획득하였다!\n");
                sleep(1);
            }
            else if (rand_item == 8)
            {
                itemBox[0] += 4;
                printf("회복약 4개를 획득하였다!\n");
                sleep(1);
            }
            else
            {
                itemBox[0] += 5;
                printf("회복약 5개를 획득하였다!\n");
                sleep(1);
            }
        }
        else if (rand_item == 3 || rand_item == 4 || rand_item == 5)
        {
            if (rand_item2 <= 2)
            {
                itemBox[1] += 1;
                printf("마나회복약 1개를 획득하였다!\n");
                sleep(1);
            }
            else if (rand_item2 >= 3 && rand_item2 <= 5)
            {
                itemBox[1] += 2;
                printf("마나회복약 2개를 획득하였다!\n");
                sleep(1);
            }
            else if (rand_item2 >= 6 && rand_item2 <= 7)
            {
                itemBox[1] += 3;
                printf("마나회복약 3개를 획득하였다!\n");
                sleep(1);
            }
            else if (rand_item == 8)
            {
                itemBox[1] += 4;
                printf("마나회복약 4개를 획득하였다!\n");
                sleep(1);
            }
            else
            {
                itemBox[1] += 5;
                printf("마나회복약 5개를 획득하였다!\n");
                sleep(1);
            }
        }
        else
        {
            printf("아무것도 획득하지 못하였다!\n");
            sleep(1);
        }
        rand_item = 0;
        rand_item2 = 0;
        system("clear");
        PrintMap(map);
    }

    if (*temp == 10)
    {
        system("clear");
        user_status[0] = user_status[5];
        user_status[1] = user_status[6];
        (*y)++;
        *temp = 0;
        map[*y][*x] = 9;
        PrintMap(map);
        printf("회복되었습니다!\n");
        sleep(1);
        system("clear");
        PrintMap(map);
    }

    map[*y][*x] = 9;
}

void OpenDoor(int map[25][25], int *walk)
{
    switch (*walk)
    {
    case 100:
    {
        printf("쿠---쿵!!!\n");
        sleep(1);
        map[18][9] = 2;
        map[18][10] = 2;
        system("clear");
        PrintMap(map);
        printf("iot반의 문이 열렸다!\n");
        sleep(1);
        system("clear");
        PrintMap(map);
    }
    break;
    case 200:
    {
        printf("쿠---쿵!!!\n");
        sleep(1);
        map[14][18] = 2;
        map[15][18] = 2;
        system("clear");
        PrintMap(map);
        printf("드론융합실의 문이 열렸다!\n");
        sleep(1);
        system("clear");
        PrintMap(map);
    }
    break;
    case 300:
    {
        printf("쿠---쿵!!!\n");
        sleep(1);
        map[6][14] = 2;
        map[6][15] = 2;
        system("clear");
        PrintMap(map);
        printf("생산정보시스템실의 문이 열렸다!\n");
        printf("신비로운 힘에 의하여 걸음수가 1걸음당 4씩 올라간다!!!\n");
        sleep(1);
        system("clear");
        PrintMap(map);
    }
    break;
    case 1804:
    {
        printf("쿠---쿵!!!\n");
        sleep(1);
        map[9][6] = 2;
        map[10][6] = 2;
        system("clear");
        PrintMap(map);
        printf("교수실의 문이 열렸다!\n");
        sleep(1);
        system("clear");
        PrintMap(map);
    }
    break;
    }
}

int Fight(int *sta, int *partner, int *partner1_sta, int *partner2_sta, char *partner_name1, char *partner_name2, int *itemBox, char *enemy_name, char *user_name, int monN, int *coin) // 전투 메인 함수
{
    char *monster[22] = {"현승몬", "규비몬", "수정몬", "수빈몬", "수연몬", "다능몬", "세정몬", "광선몬", "웅철몬", "인희몬", "하경몬", "민형몬", "병훈몬", "주현몬", "용민몬", "홍균몬", "준호몬", "상호몬", "수철몬", "지우몬", "승범몬"};
    int turn = 1, run_turn = 0;
    char atk;
    int enemy_sta[4] = {200, 20, 20, 200};
    int enemyleveluphp = 0;
    int enemylevelupdmg = 0;
    char art[2000];
    // FILE *rfp;
    // FILE *rfp2;

    for (int i = 1; i <= sta[7]; i++)
    {
        if (i % 1 == 0)
        {
            enemyleveluphp += 1200;
            enemylevelupdmg += 100;
        }
    }

    enemy_sta[0] = rand() % 301 + 100 + enemyleveluphp;
    enemy_sta[1] = rand() % 51 + 80 + enemylevelupdmg;
    enemy_sta[2] = rand() % 71 + 80 + enemylevelupdmg;
    enemy_sta[3] = enemy_sta[0];

    while (1)
    {
        int attack_1 = -(rand() % (sta[2] - (sta[2] / 2))) + sta[2];
        int enemyattack = -(rand() % (enemy_sta[1] - (enemy_sta[1] / 2))) + enemy_sta[1];
        int partner1_attack = rand() % (*partner1_sta) + 1;
        int partner2_attack = rand() % (*partner2_sta) + 1;
        system("clear");
        int back_count = 0;
        PrintDevmon(art, monN);

        Status_print(sta, enemy_sta, partner, partner_name1, partner_name2, &partner1_sta, &partner2_sta, enemy_name, user_name);
        printf("1.공격 2.특수공격 3.도구상자 4.도망(10%%)\n번호를 입력하세요: ");
        scanf("%s", &atk);
        system("clear");
        if (atk == '1')
        { // 공격했을경우
            switch (*partner)
            {
            case 1:
                enemy_sta[0] = enemy_sta[0] - attack_1 - partner1_attack;
                break;
            case 2:
                enemy_sta[0] = enemy_sta[0] - attack_1 - partner1_attack - partner2_attack;
                break;
            default:
                enemy_sta[0] -= attack_1;
                break;
            }
            attack(art, sta, *partner, partner1_attack, partner2_attack, partner_name1, partner_name2, attack_1, enemy_name);
        }
        else if (atk == '2')
        { // 특수공격 햇을경우
            if (sta[1] > 9)
            {
                sta[1] -= 10;
                switch (*partner)
                {
                case 1:
                    enemy_sta[0] = enemy_sta[0] - sta[3] - partner1_attack;
                    break;
                case 2:
                    enemy_sta[0] = enemy_sta[0] - sta[3] - partner1_attack - partner2_attack;
                    break;
                default:
                    enemy_sta[0] -= sta[3];
                    break;
                }
                S_attack(art, sta, *partner, partner1_attack, partner2_attack, partner_name1, partner_name2, enemy_name);
            }
            else
            {
                printf("MP가 부족합니다. 특수공격을 사용할수 없습니다.\n");
                sleep(1);
                continue;
            }
        }
        else if (atk == '3')
        {
            Item_Box(art, itemBox, &back_count, sta);
            if (back_count != 0)
                continue;
        }
        else if (atk == '4')
        {
            if (run_turn == 0)
            {
                int run = rand() % 10;
                if (run == 1)
                {
                    printf("도망치는데 성공 했습니다.\n");
                    run_turn++;
                    sleep(1);
                    return 3;
                    break;
                }
                else
                {
                    printf("도망치치 못했습니다. 전투를 준비하세요...\n");
                    run_turn++;
                    sleep(1);
                    continue;
                }
            }
            else
            {
                printf("더이상 도망칠수 없습니다.\n");
                sleep(1);
                continue;
            }
        }
        else
            continue;

        if (enemy_sta[0] <= 0)
        {
            int made_p = MadePartner(partner, &partner1_sta, &partner2_sta, partner_name1, partner_name2, enemy_sta, enemy_name);
            system("clear");
            printtext(art, 1);
            printf("승리하였습니다!!!\n");
            printf("경험치를 획득했습니다.\n");
            int rand_coin = rand() % 6;
            printf("%d골드를 획득했다!!!\n", rand_coin);
            *coin += rand_coin;
            sta[4] += 1;
            sleep(1);
            if (sta[4] >= sta[8])
            {
                system("clear");
                sta[4] = 0;
                // sta[8]++;
                sta[7]++;
                sta[5] += rand() % 1501 + 400;
                // sta[6] += 10;
                sta[2] += rand() % 101 + 300;
                sta[3] += rand() % 201 + 500;
                sta[0] = sta[5];
                sta[1] = sta[6];
                printtext(art, 3);
                printf("레벨업!!!\n");
                sleep(1);
            }
            if (made_p == 0)
                return 1;
            else if (made_p == 1)
                return 2;
            else
                return 3;
            break;
        }

        PrintDevmon(art, monN);
        printf("---------------------------------------------------------------\n%s이 공격합니다...\n", enemy_name);
        sleep(1);
        system("clear");
        if (rand() % 3 == 0)
        { // 몬스터 공격
            Sattack_enemy(art, enemy_sta, enemy_name, monN);
            sta[0] -= enemy_sta[2];
        }
        else
        {
            sta[0] -= enemyattack;
            attack_enemy(art, enemy_sta, enemyattack);
        }

        if (sta[0] <= 0)
        {
            printtext(art, 2);
            printf("패배하였습니다!!!\n");
            sleep(1);
            return 0;
            break;
        }
    }
}

void attack(char *size, int *status, int partNum, int partnerSta1, int partnerSta2, char *partnerName, char *partnerName2, int attack1, char *enemy_name) // 기본 공격 컷씬
{
    FILE *rfp_attak_1;
    FILE *rfp_attack_2;
    char *attack_motion1, *attack_motion2;
    int randNum = rand() % 3;
    switch (randNum)
    {
    case 1:
        attack_motion1 = "attack_1", attack_motion2 = "attack_1.1";
        break;
    case 2:
        attack_motion1 = "attack_2", attack_motion2 = "attack_2.1";
        break;
    default:
        attack_motion1 = "attack_3", attack_motion2 = "attack_3.1";
        break;
    }
    int q = 0;
    while (q < 3)
    {
        rfp_attak_1 = fopen(attack_motion1, "rt");
        rfp_attack_2 = fopen(attack_motion2, "rt");
        while (fgets(size, 2000, rfp_attak_1) != NULL)
        {
            printf("%s", size);
        }
        puts("");

        fclose(rfp_attak_1);

        printf("\n");
        printf("%s에게 %d 만큼의 데미지를 입혔다!!!\n", enemy_name, attack1);
        switch (partNum)
        {
        case 1:
            printf("%s이 %s에게 %d 만큼의 데미지를 입혔다!!!\n", partnerName, enemy_name, partnerSta1);
            break;
        case 2:
            printf("%s이 %s에게 %d 만큼의 데미지를 입혔다!!!\n", partnerName, enemy_name, partnerSta1);
            printf("%s이 %s에게 %d 만큼의 데미지를 입혔다!!!\n", partnerName2, enemy_name, partnerSta2);
        default:
            break;
        }
        usleep(300000);
        system("clear");

        while (fgets(size, 2000, rfp_attack_2) != NULL)
        {
            printf("%s", size);
        }
        puts("");

        fclose(rfp_attack_2);
        printf("%s에게 %d 만큼의 데미지를 입혔다!!!\n", enemy_name, attack1);
        switch (partNum)
        {
        case 1:
            printf("%s이 %s에게 %d 만큼의 데미지를 입혔다!!!\n", partnerName, enemy_name, partnerSta1);
            break;
        case 2:
            printf("%s이 %s에게 %d 만큼의 데미지를 입혔다!!!\n", partnerName, enemy_name, partnerSta1);
            printf("%s이 %s에게 %d 만큼의 데미지를 입혔다!!!\n", partnerName2, enemy_name, partnerSta2);
        default:
            break;
        }
        usleep(300000);
        system("clear");
        q++;
    }
}
void attack_enemy(char *size, int *enemystatus, int enemyattack) // 적공격 컷씬
{
    FILE *rfp_e_attack1;
    FILE *rfp_e_attack2;
    int q = 0;
    while (q < 5)
    {
        rfp_e_attack1 = fopen("E1_attack_1", "rt");
        rfp_e_attack2 = fopen("E1_attack_1.1", "rt");
        while (fgets(size, 2000, rfp_e_attack1) != NULL)
        {
            printf("%s", size);
        }
        puts("");
        fclose(rfp_e_attack1);
        printf("%d 만큼의 데미지를 입었다!!!\n", enemyattack);
        usleep(200000);
        system("clear");
        while (fgets(size, 2000, rfp_e_attack2) != NULL)
        {
            printf("%s", size);
        }
        puts("");
        fclose(rfp_e_attack2);
        printf("%d 만큼의 데미지를 입었다!!!\n", enemyattack);
        usleep(200000);
        system("clear");
        q++;
    }
}

void Sattack_enemy(char *size, int *enemystatus, char *enemy_name, int num)
{
    char *enemySkill[3] = {"파이어브레스", "에너지볼트", "심판"};
    char *monN1;
    char *monN2;
    char *monN3;
    num = rand() % 3;
    switch (num)
    {
    case 0:
        monN1 = "1001", monN2 = "1002", monN3 = "1003";
        break;
    case 1:
        monN1 = "1011", monN2 = "1012", monN3 = "1013";
        break;
    default:
        monN1 = "1021", monN2 = "1022", monN3 = "1023";
        break;
    }
    int q = 0;
    while (q < 2)
    {
        FILE *E_satk_rfp1 = fopen(monN1, "rt");
        FILE *E_satk_rfp2 = fopen(monN2, "rt");
        FILE *E_satk_rfp3 = fopen(monN3, "rt");

        while (fgets(size, 2000, E_satk_rfp1) != NULL)
            printf("%s", size);
        printf("%s의 %s---\n %d만큼 데미지를 입었다.\n", enemy_name, enemySkill[num], enemystatus[2]);
        usleep(300000);
        fclose(E_satk_rfp1);
        system("clear");
        while (fgets(size, 2000, E_satk_rfp2) != NULL)
            printf("%s", size);
        printf("%s의 %s---\n %d만큼 데미지를 입었다.\n", enemy_name, enemySkill[num], enemystatus[2]);
        usleep(300000);
        fclose(E_satk_rfp2);
        system("clear");
        while (fgets(size, 2000, E_satk_rfp3) != NULL)
            printf("%s", size);
        printf("%s의 %s---\n %d만큼 데미지를 입었다.\n", enemy_name, enemySkill[num], enemystatus[2]);
        usleep(300000);
        fclose(E_satk_rfp3);
        system("clear");
        q++;
    }
}
void S_attack(char *size, int *status, int partNum, int partnerSta1, int partnerSta2, char *partnerName, char *partnerName2, char *enemy_name) // 특수공격 컷씬
{
    FILE *rfp_Sattack1;
    FILE *rfp_Sattack2;
    FILE *rfp_Sattack3;
    FILE *rfp_Sattack4;
    char *Sattack_motion1, *Sattack_motion2, *Sattack_motion3, *Sattack_motion4;
    int randNum = rand() % 3;
    switch (randNum)
    {
    case 1:
        Sattack_motion1 = "Sattack_2", Sattack_motion2 = "Sattack_2.1", Sattack_motion3 = "Sattack_2.2", Sattack_motion4 = "Sattack_2.3";
        break;
    case 2:
        Sattack_motion1 = "Sattack_3", Sattack_motion2 = "Sattack_3.1", Sattack_motion3 = "Sattack_3.2", Sattack_motion4 = "Sattack_3.3";
        break;
    default:
        Sattack_motion1 = "Sattack_1", Sattack_motion2 = "Sattack_1.1", Sattack_motion3 = "Sattack_1.2", Sattack_motion4 = "Sattack_1.3";
        break;
    }
    rfp_Sattack1 = fopen(Sattack_motion1, "rt");
    rfp_Sattack2 = fopen(Sattack_motion2, "rt");
    rfp_Sattack3 = fopen(Sattack_motion3, "rt");
    rfp_Sattack4 = fopen(Sattack_motion4, "rt");
    while (fgets(size, 2000, rfp_Sattack1) != NULL)
    {
        printf("%s", size);
    }
    puts("");
    fclose(rfp_Sattack1);
    printf("특수공격으로 %s에게 %d만큼 데미지를 입혔다.\n", enemy_name, status[3]);
    switch (partNum)
    {
    case 1:
        printf("%s이 %s에게 %d 만큼의 데미지를 입혔댜!!!\n", partnerName, enemy_name, partnerSta1);
        break;
    case 2:
        printf("%s이 %s에게 %d 만큼의 데미지를 입혔댜!!!\n", partnerName, enemy_name, partnerSta1);
        printf("%s이 %s에게 %d 만큼의 데미지를 입혔댜!!!\n", partnerName2, enemy_name, partnerSta2);
    default:
        break;
    }
    usleep(300000);
    system("clear");
    while (fgets(size, 2000, rfp_Sattack2) != NULL)
    {
        printf("%s", size);
    }
    puts("");
    fclose(rfp_Sattack2);
    printf("특수공격으로 %s에게 %d만큼 데미지를 입혔다.\n", enemy_name, status[3]);
    switch (partNum)
    {
    case 1:
        printf("%s이 %s에게 %d 만큼의 데미지를 입혔다!!!\n", partnerName, enemy_name, partnerSta1);
        break;
    case 2:
        printf("%s이 %s에게 %d 만큼의 데미지를 입혔다!!!\n", partnerName, enemy_name, partnerSta1);
        printf("%s이 %s에게 %d 만큼의 데미지를 입혔다!!!\n", partnerName2, enemy_name, partnerSta2);
    default:
        break;
    }
    usleep(300000);
    system("clear");
    while (fgets(size, 2000, rfp_Sattack3) != NULL)
    {
        printf("%s", size);
    }
    puts("");
    fclose(rfp_Sattack3);
    printf("특수공격으로 %s에게 %d만큼 데미지를 입혔다.\n", enemy_name, status[3]);
    switch (partNum)
    {
    case 1:
        printf("%s이 %s에게 %d 만큼의 데미지를 입혔다!!!\n", partnerName, enemy_name, partnerSta1);
        break;
    case 2:
        printf("%s이 %s에게 %d 만큼의 데미지를 입혔다!!!\n", partnerName, enemy_name, partnerSta1);
        printf("%s이 %s에게 %d 만큼의 데미지를 입혔다!!!\n", partnerName2, enemy_name, partnerSta2);
    default:
        break;
    }
    usleep(300000);
    system("clear");
    while (fgets(size, 2000, rfp_Sattack4) != NULL)
    {
        printf("%s", size);
    }
    puts("");
    fclose(rfp_Sattack4);
    printf("특수공격으로 %s에게 %d만큼 데미지를 입혔다.\n", enemy_name, status[3]);
    switch (partNum)
    {
    case 1:
        printf("%s이 %s에게 %d 만큼의 데미지를 입혔다!!!\n", partnerName, enemy_name, partnerSta1);
        break;
    case 2:
        printf("%s이 %s에게 %d 만큼의 데미지를 입혔다!!!\n", partnerName, enemy_name, partnerSta1);
        printf("%s이 %s에게 %d 만큼의 데미지를 입혔다!!!\n", partnerName2, enemy_name, partnerSta2);
    default:
        break;
    }
    sleep(1);
    system("clear");
}
int MadePartner(int *partNum, int **partnerSta1, int **partnerSta2, char *partnerName, char *partnerName2, int *enemySta, char *enemy_name) // 동료 만들기
{
    char *monster[22] = {"현승몬", "규비몬", "수정몬", "수빈몬", "수연몬", "다능몬", "세정몬", "광선몬", "웅철몬", "인희몬", "하경몬", "민형몬", "병훈몬", "주현몬", "용민몬", "홍균몬", "준호몬", "상호몬", "수철몬", "지우몬", "승범몬"};
    char n;
    switch (*partNum)
    {
    case 0:
        printf("이름 : %s\n공격력 : %d\n", enemy_name, enemySta[1]);
        printf("%s를 영입하겠습니까???\n1. 네  2,아니오: ", enemy_name);
        scanf("%s", &n);
        if (n == '1')
        {
            (*partNum)++;
            **partnerSta1 = enemySta[1];
            return 0;
        }
        break;
    case 1:
        printf("이름 : %s\n공격력 : %d\n", enemy_name, enemySta[1]);
        printf("%s를 영입하겠습니까???\n1. 네  2.아니오: ", enemy_name);
        scanf("%s", &n);
        if (n == '1')
        {
            (*partNum)++;
            **partnerSta2 = enemySta[1];
            return 1;
        }
        break;
    case 2:
        printf("이름 : %s\n공격력 : %d\n", enemy_name, enemySta[1]);
        printf("--------------------------------------------");
        printf("내 동료\n1.%s  공격력 %d\n2.%s  공격력 %d\n", partnerName, **partnerSta1, partnerName2, **partnerSta2);
        printf("%s를 영입하겠습니까???\n1. 네  2,아니오: ", enemy_name);
        scanf("%s", &n);
        if (n == '1')
        {
            printf("누구와 교체하시겠습니까??\n번호를 입력해주세요: ");
            scanf("%s", &n);
            if (n == '1')
            {
                **partnerSta1 = enemySta[1];
                return 0;
            }
            else if (n == '2')
            {
                **partnerSta2 = enemySta[1];
                return 1;
            }
        }
        break;
    default:
        break;
    }
}
void Item_Box(char *size, int *itembox, int *Bcount, int *status) // 도구상자
{
    int turn = 0;
    char select;
    while (select != '0')
    {
        system("clear");
        FILE *rfp_box;
        rfp_box = fopen("itembox", "rt");
        while (fgets(size, 2000, rfp_box) != NULL)
        {
            printf("%s", size);
        }
        puts("");
        fclose(rfp_box);
        printf("0. 뒤로가기\n1.회복약 = %d개\n2.마나회복약 = %d개\n사용하실 아이템의 번호를 입력해주세요: ", itembox[0], itembox[1]);
        scanf("%s", &select);
        switch (select)
        {
        case '0':
            *Bcount += 1;
            break;
        case '1':
            if (itembox[0] == 0)
            {
                printf("사용할 아이템이 없습니다.\n");
                sleep(1);
                break;
            }
            else
            {
                system("clear");
                Life_cure(size, status);
                status[0] += (status[5] / 2);
                if (status[0] > status[5])
                {
                    status[0] = status[5];
                }
                itembox[0] -= 1;
                turn++;
                break;
            }
        case '2':
            if (itembox[1] == 0)
            {
                printf("사용할 아이템이 없습니다.\n");
                sleep(1);
                break;
            }
            else
            {
                system("clear");
                Mana_cure(size, status);
                status[1] += (status[6] / 2);
                if (status[1] > status[6])
                    status[1] = status[6];
                itembox[1]--;
                turn++;
            }
        default:
            break;
        }
        if (turn != 0)
        {
            system("clear");
            break;
        }
    }
}

void Status_print(int *status, int *enemystatus, int *partnerNum, char *partnerName, char *partnerName2, int **partner1, int **partner2, char *enemyname, char *username) // 스텟 프린트
{
    printf("----------%s----------\n", username);
    printf("레벨: %d\nHP: %d / %d    MP: %d / %d    공격력: %d    특수공격력: %d\n", status[7], status[0], status[5], status[1], status[6], status[2], status[3]);
    if (*partnerNum == 1)
        printf("%s -- 공격력: %d\n", partnerName, **partner1);
    else if (*partnerNum == 2)
    {
        printf("%s -- 공격력: %d\n", partnerName, **partner1);
        printf("%s -- 공격력: %d\n", partnerName2, **partner2);
    }
    printf("----------%s----------\n", enemyname);
    printf("HP: %d / %d    공격력: %d    특수공격력: %d\n", enemystatus[0], enemystatus[3], enemystatus[1], enemystatus[2]);
    printf("*************************************************\n");
}

int BossFight(int *sta, int *partner, int *partner1_sta, int *partner2_sta, char *partner_name1, char *partner_name2, int *itemBox, char *user_name) // 보스 전투 메인 함수
{
    int turn = 1, run_turn = 0;
    char atk;
    int enemy_sta[4] = {50000, 2023, 3000, 50000};
    char art[2000];
    FILE *boss_rfp;

    while (1)
    {
        int attack_1 = -(rand() % (sta[2] - (sta[2] / 2))) + sta[2];
        int boss_attack = rand() % 1924 + 100;
        int partner1_attack = rand() % (*partner1_sta);
        int partner2_attack = rand() % (*partner2_sta);
        system("clear");
        int back_count = 0;
        boss_rfp = fopen("boss", "rt");

        while (fgets(art, 2000, boss_rfp) != NULL)
        { // 첫번째 턴
            printf("%s", art);
        }
        puts("");
        fclose(boss_rfp);
        Status_print(sta, enemy_sta, partner, partner_name1, partner_name2, &partner1_sta, &partner2_sta, "리상복", user_name);
        printf("1.공격 2.특수공격 3.도구상자 \n번호를 입력하세요: ");
        scanf("%s", &atk);
        system("clear");
        if (atk == '1')
        { // 공격했을경우
            switch (*partner)
            {
            case 1:
                enemy_sta[0] = enemy_sta[0] - attack_1 - partner1_attack;
                break;
            case 2:
                enemy_sta[0] = enemy_sta[0] - attack_1 - partner1_attack - partner2_attack;
                break;
            default:
                enemy_sta[0] -= attack_1;
                break;
            }
            attack(art, sta, *partner, partner1_attack, partner2_attack, partner_name1, partner_name2, attack_1, "리상복");
        }
        else if (atk == '2')
        { // 특수공격 햇을경우
            if (sta[1] > 0)
            {
                sta[1]--;
                switch (*partner)
                {
                case 1:
                    enemy_sta[0] = enemy_sta[0] - sta[3] - partner1_attack;
                    break;
                case 2:
                    enemy_sta[0] = enemy_sta[0] - sta[3] - partner1_attack - partner2_attack;
                    break;
                default:
                    enemy_sta[0] -= sta[3];
                    break;
                }
                S_attack(art, sta, *partner, partner1_attack, partner2_attack, partner_name1, partner_name2, "리상복");
            }
            else
            {
                printf("MP가 부족합니다. 특수공격을 사용할수 없습니다.\n");
                sleep(1);
                continue;
            }
        }
        else if (atk == '3')
        {
            Item_Box(art, itemBox, &back_count, sta);
            if (back_count != 0)
                continue;
        }
        else
            continue;

        if (enemy_sta[0] <= 0)
        { // 중간 결과
            break;
            return 10;
        }
        if (enemy_sta[0] < 5000)
        { // 보스 체력회복
            int iceTea = rand() % 10;
            if (iceTea == 0 || iceTea == 1 || iceTea == 2)
            {
                printf("보스가 아이스티를 마시고 피 5000을 회복했다./n");
                sleep(1);
                enemy_sta[0] += 5000;
            }
        }

        boss_rfp = fopen("poketmon_2", "rt"); // 세번째
        while (fgets(art, 2000, boss_rfp) != NULL)
        {
            printf("%s", art);
        }
        puts("");
        fclose(boss_rfp);
        printf("---------------------------------------------------------------\n리상복이 공격합니다...\n");
        sleep(1);
        system("clear");
        int BA;
        int BossAttack = rand() % 2; // 보스 특수공격
        if (BossAttack == 1)
        {
            printf("보스가 특수스킬을 사용했다!!!");
            BA = BossSpecial();
            if (BA == 1)
            {
                attack_enemy(art, enemy_sta, enemy_sta[2]);
                sta[0] -= enemy_sta[2];
            }
            else if (BA == 2)
            {
                attack_enemy(art, enemy_sta, enemy_sta[2]);
                sta[0] -= enemy_sta[2];
            }
            else
            {
                printf("공격을 방어했습니다.\n");
                sleep(1);
                system("clear");
            }
        }
        else
        { // 보스 일반공격
            sta[0] -= boss_attack;
            attack_enemy(art, enemy_sta, boss_attack);
        }
        if (sta[0] <= 0)
        { // 결과
            return 0;
            break;
        }
    }
}
int BossSpecial(void)
{
    int num = rand() % 2;
    switch (num)
    {
    case 0:
    {
        printf("가위바위보 대결!\n1.보스에게서 승리하면 공격을 막을수있다.\n2.보스에게서 패배하면 많은 데미지를 입는다.\n3.비기면 재대결\n");
        sleep(6);
        int G1_user, G1_pc;
        int G1_win = 0, G1_lose = 0;

        while (G1_lose == 0 && G1_win == 0)
        {
            system("clear");
            printf("바위는 1, 가위는 2,보는 3: ");
            scanf("%d", &G1_user);
            G1_pc = (rand() % 3) + 1;

            if (G1_user == 1)
            {
                switch (G1_pc)
                {
                case 1:
                    printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다!\n");
                    break;
                case 2:
                    printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다!\n");
                    sleep(1);
                    G1_win++;
                default:
                    printf("당신은 바위 선택, 컴퓨터는 보 선택, 졌습니다!\n");
                    G1_lose++;
                    sleep(1);
                    break;
                }
            }
            else if (G1_user == 2)
            {
                switch (G1_pc)
                {
                case 1:
                    printf("당신은 가위 선택, 컴퓨터는 바위 선택, 졌습니다!\n");
                    G1_lose++;
                    sleep(1);
                    break;
                case 2:
                    printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다!\n");
                default:
                    printf("당신은 가위 선택, 컴퓨터는 보 선택, 이겼습니다!\n");
                    G1_win++;
                    sleep(1);
                    break;
                }
            }
            else if (G1_user == 3)
            {
                switch (G1_pc)
                {
                case 1:
                    printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다!\n");
                    G1_win++;
                    sleep(1);
                    break;
                case 2:
                    printf("당신은 보 선택, 컴퓨터는 가위 선택, 졌습니다!\n");
                    G1_lose++;
                    sleep(1);
                default:
                    printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다!\n");
                    break;
                }
            }
        }
        if (G1_win == 1)
            return 0;
        else
            return 1;
        break;
    }
    default:
        printf("강타!!!\n");
        sleep(1);
        system("clear");
        return 2;
        break;
    }
}

void Life_cure(char *size, int *status)
{
    FILE *life_rfp1;
    FILE *life_rfp2;
    FILE *life_rfp3;

    int q = 0;
    while (q < 2)
    {
        life_rfp1 = fopen("HP_recovery1", "rt");
        life_rfp2 = fopen("HP_recovery1.1", "rt");
        life_rfp3 = fopen("HP_recovery1.2", "rt");

        while (fgets(size, 2000, life_rfp1) != NULL)
        {
            printf("%s", size);
        }
        puts("");
        fclose(life_rfp1);
        printf("회복약을 사용하여 %d만큼 회복하였습니다.\n", status[5] / 2);
        usleep(300000);
        system("clear");
        while (fgets(size, 2000, life_rfp2) != NULL)
        {
            printf("%s", size);
        }
        puts("");
        fclose(life_rfp2);
        printf("회복약을 사용하여 %d만큼 회복하였습니다.\n", status[5] / 2);
        usleep(300000);
        system("clear");
        while (fgets(size, 2000, life_rfp3) != NULL)
        {
            printf("%s", size);
        }
        puts("");
        fclose(life_rfp3);
        printf("회복약을 사용하여 %d만큼 회복하였습니다.\n", status[5] / 2);
        usleep(300000);
        system("clear");
        q++;
    }
}

void Mana_cure(char *size, int *status)
{
    FILE *life_rfp1;
    FILE *life_rfp2;
    FILE *life_rfp3;

    int q = 0;
    while (q < 2)
    {
        life_rfp1 = fopen("HP_recovery1", "rt");
        life_rfp2 = fopen("HP_recovery1.1", "rt");
        life_rfp3 = fopen("HP_recovery1.2", "rt");

        while (fgets(size, 2000, life_rfp1) != NULL)
        {
            printf("%s", size);
        }
        puts("");
        fclose(life_rfp1);
        printf("회복약을 사용하여 %d만큼 회복하였습니다.\n", status[6] / 2);
        usleep(300000);
        system("clear");
        while (fgets(size, 2000, life_rfp2) != NULL)
        {
            printf("%s", size);
        }
        puts("");
        fclose(life_rfp2);
        printf("회복약을 사용하여 %d만큼 회복하였습니다.\n", status[6] / 2);
        usleep(300000);
        system("clear");
        while (fgets(size, 2000, life_rfp3) != NULL)
        {
            printf("%s", size);
        }
        puts("");
        fclose(life_rfp3);
        printf("회복약을 사용하여 %d만큼 회복하였습니다.\n", status[6] / 2);
        usleep(300000);
        system("clear");
        q++;
    }
}

void chapic(int n, int user_status[], char user_name[])
{
    if (n == 1)
        printf("캐릭터의 이름을 입력하세요(15자 이하로): ");
    else
        exit(1);

    scanf("%s", user_name);

    // printf("\n선택하신 캐릭터의 이름은 %s입니다. 스탯창을 띄워드립니다! \n", user_name);
    // printf("================================================================= \n");

    user_status[0] = rand() % 401 + 1800;
    user_status[2] = rand() % 201 + 400;
    user_status[3] = rand() % 401 + 500;

    // printf("hp : %d  mp : %d  공격력 : %d  특수 공격력 : %d  경험치 %d 레벨 %d \n", user_status[0], user_status[1], user_status[2], user_status[3], user_status[4], user_status[7]);
    user_status[5] = user_status[0];
    user_status[6] = user_status[1];
}

// void ShowPic(char *fn)
// {
//     FILE *fp; // 1. 파일 포인터 선언
//     char name[1000];
//     fp = fopen(fn, "r"); // 2. 파일 열기(읽기 모드)

//     while ((fgets(name, 50, fp) != NULL)) // 3. 파일 입출력 : 파일 끝에 도달할 때까지 읽기
//         printf("%s", name);               // 레코드의 끝에 이미 '\n'이 저장되어 있어 개행문자를 넣지 않아도 됨
//     fclose(fp);
// }

