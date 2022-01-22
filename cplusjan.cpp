//�W�����P���Q�[��

#include<iostream>
#include<stdlib.h>

//�萔3�񏟕��p
#define MAX_LOOP 3
//�O���[�o���ϐ�
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

//���͏���(InputFunc)
void RpcGame::InputFunc()
{
	//�v���C���[�̓��͂����߂�
	std::cout << "���Ȃ��̎����͂��Ă��������i�O�[:1�@�`���L�F2�@�p�[�F3) ��" << std::endl;
	//���͒l���󂯎��
	std::cin >> player;
	
}

//PC�̓���(InputPc)
void RpcGame::InputPc()
{
	//�����֐����g���āA1�`3�݂̂�߂��悤�ɐ���
	pc = (rand() % 3 + 1);
	std::cout << "�R���s���[�^��" << pc << std::endl;
	
}



//�������ʕ\��
int RpcGame::ResultDisp()
{

	//��������
	if (pc == player) {
		std::cout << "��������\n" << std::endl;
	}
	else if (player == 1 && pc == 2) {
		std::cout << "����\n" << std::endl;
	}
	else if(player == 2 && pc == 3) {
		std::cout << "����\n" << std::endl;
	}
	else if (player == 3 && pc == 1) {
		std::cout << "����\n" << std::endl;
	}
	else {
		std::cout << "����\n" << std::endl;
	}

	return 0;
}

//�I������(EndJudge)
int RpcGame::EndJudge(void)
{
	int end;
	//�Q�[���I�����b�Z�[�W
	std::cout << "�Q�[���I�����܂����H�i�͂��F[1],������:[0])\n" << std::endl;
	//���͒l���󂯎��
	std::cin>>end;

	return end;
}

int main(void)
{
	RpcGame st;
	std::cout << "���W�����P���Q�[��(" << MAX_LOOP << "����j����\n\n" << std::endl;
	

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

