#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void Show_Menu(void);
void Create_Account(void);
void Deposit_Money(void);
void Withdraw_Money(void);
void Show_All_AccountInfo(void);

enum {MAKE = 1, DEPOSIT, WITHDRAW, SHOWACC, EXIT};

typedef struct{
  int accId;
  char name[20];
  int balance;
} Account;

int main(void)
{
  int choice;

  Show_Menu();
  cout<<"선택 : ";
  cin>>choice;

  switch(choice){
    case MAKE:
      Create_Account();
      break;

    case DEPOSIT:
      Deposit_Money();
      break;

    case WITHDRAW:
      Withdraw_Money();
      break;

    case SHOWACC:
      Show_All_AccountInfo();
      break;

    case EXIT:
      return 0;

    default:
      cout<<"Illegal selection.."<<endl;
  }
}

void Show_Menu(void)
{
  cout<<"-----Menu-----"<<endl;
  cout<<"1. 계좌개설"<<endl;
  cout<<"2. 입    금"<<endl;
  cout<<"3. 출    금"<<endl;
  cout<<"4. 계좌정보 전체 출력"<<endl;
  cout<<"5. 프로그램 종료"<<endl;
}


void Create_Account(void)
{

}

void Deposit_Money(void)
{

}

void Withdraw_Money(void)
{

}

void Show_All_AccountInfo(void)
{

}
