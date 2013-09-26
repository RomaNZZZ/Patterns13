#pragma once
using namespace std;


class Machinery
{
protected:

	int x,y; // ����������
	int armor; // �����
	int speed; // ��������
	int max_arm;
	
	public:
	Machinery(const Machinery &mach); // ����������� �����������
	virtual ~Machinery(void); // ����������

	// ��� �������� �������
	Machinery(void); // �����������
	Machinery(int dx, int dy); // �����������
	Machinery(int dx, int dy, int arm, int spd,int m_a); // �����������

	// ��� ��������� ���������� �������
	void move_at(int, int);
	void get_pos(int &, int &);
	void dec_arm(int);

	// ��� ������ ���������� �� �������
	int get_arm();
	int get_spd();
	int get_X();
	int get_Y();
	int get_ma();

	void set_arm(int x);


protected:
	static const int ARM = 100;
	static const int SPD = 5;

};

