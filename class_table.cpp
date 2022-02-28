#include <bits/stdc++.h>
#define num 25
using namespace std;

int shuffle1,shuffle2;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string arr[101] = {"1 강민수","2 강현택","3 구민준","4 권성진","5 김건한",
                       "6 김경언","7 김동균","8 김동영","9 김승민","10 김현종",
                       "11 박종태","12 박찬솔","13 박태준","14 박현태","15 방수빈",
                       "16 옥동근","17 이겸수","18 이태영","19 이현종","20 임성택",
                       "21 전무강","22 정민재","23 정성훈","24 최환석","25 한대희"};

    srand((unsigned  int)time(NULL));

    vector<int> student(1001);

    for(int i=0;i<num;i++) student[i] = i;

    for(int i=0;i<50;i++){
        shuffle1 = rand() % num;
        shuffle2 = rand() % num;

        if(shuffle1!=shuffle2){
            swap(student[shuffle1],student[shuffle2]);
        }
    }
    printf("                                         ================\n"

           "                                         ||     교탁    ||\n"
           "                                         ================\n\n"
    );


    cout << "         ";
    int cnt = 0 ,one = 0;
    for(int i=0;i<num;i++){
        if(student[i]==0 && one!=0) continue;
        if(one==0 && student[i]==0) one ++;
        cout << "|| " <<arr[student[i]] << " ||     ";
        cnt++;
        if(i!=0&&cnt%5==0) cout << "\n\n" << "         "; // 열 조절 나누는 값 변경
    }
    cout << "\n\n\n";
}
