#pragma once
#include "Machinery.h"
class Transport :
	public Machinery
{
protected:
	int fly_speed; // �������� �� �������
	int spice; // �����
	int obtain_speed; // �������� ������ ������
	int spice_amout;

public:

//	Transport(const Transport &trans);
	virtual ~Transport(void);


	// ��� �������� �������
	Transport(void); // �����������
	Transport(int dx, int dy, int arm, int spd,int m_a, int spc, int o_s, int f_s,int s_a); // �����������


	// ��� ��������� ���������� �������
	void spoil();

	

	// ��� ������ ���������� �� �������
	int get_spc();
	int get_o_s();
	int get_s_a();
	void drop_s_a();
};


