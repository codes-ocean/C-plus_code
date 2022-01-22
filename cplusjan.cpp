//ジャンケンゲーム

#include<iostream>
#include<stdlib.h>

//定数3回勝負用
#define MAX_LOOP 3
//グローバル変数
int pc, player;

class RpcGame {
private:
	int player;
	int pc;	
	int end;
public:
	void InputFunc();
	void InputPc();

	int ResultDisp();
	int EndJudge();
	
};

//入力処理(InputFunc)
void RpcGame::InputFunc()
{
	//プレイヤーの入力を求める
	std::cout << "あなたの手を入力してください（グー:1　チョキ：2　パー：3) ＞" << std::endl;
	//入力値を受け取る
	std::cin >> player;
	
}

//PCの入力(InputPc)
void RpcGame::InputPc()
{
	//乱数関数を使って、1～3のみを戻すように制御
	pc = (rand() % 3 + 1);
	std::cout << "コンピュータは" << pc << std::endl;
	
}



//勝負結果表示
int RpcGame::ResultDisp()
{

	//勝負判定
	if (pc == player) {
		std::cout << "引き分け\n" << std::endl;
	}
	else if (player == 1 && pc == 2) {
		std::cout << "勝ち\n" << std::endl;
	}
	else if(player == 2 && pc == 3) {
		std::cout << "勝ち\n" << std::endl;
	}
	else if (player == 3 && pc == 1) {
		std::cout << "勝ち\n" << std::endl;
	}
	else {
		std::cout << "負け\n" << std::endl;
	}

	return 0;
}

//終了判定(EndJudge)
int RpcGame::EndJudge(void)
{
	int end;
	//ゲーム終了メッセージ
	std::cout << "ゲーム終了しますか？（はい：[1],いいえ:[0])\n" << std::endl;
	//入力値を受け取る
	std::cin>>end;

	return end;
}

int main(void)
{
	RpcGame st;
	std::cout << "★ジャンケンゲーム(" << MAX_LOOP << "回線）★★\n\n" << std::endl;
	

	do
	{
		for (int count = 1;count <= MAX_LOOP;count++) {
			st.InputFunc();
			st.InputPc();
			st.ResultDisp();
		}
	} while (st.EndJudge() != 1);
	return 0;
}

