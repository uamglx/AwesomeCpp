#include <iostream>

using namespace std;

/****************************************

                                         C++ �麯���Ͷ�̬
      1. �麯�����ڻ�����ʹ��virtual�����ĺ��������ڱ�д�ຯ�������ʱ�򣬲�ȷ������
         �Ļ�����ຯ�����뻹����������ຯ�����룬����Ҫ������ʱ��ȷ������̬�󶨣������Զ���Ϊ"��"������
      2. ���ڻ�����û�о����ʵ�֡���Ҫ��ÿ�����������ʵ�ִ��ຯ��ʱ����Ҫ���麯�������ڻ�������������ʵ�֣����ں���ԭ�ͺ�����"=0"��
         �� virtual void function()=0;
      3. ��̬���Ƕ�����̬����̬�󶨡���̬���麯����������������ζ�ţ�����������ຯ��ʱ�����ݶ���������ִ�в�ͬ�ĺ�����

      ������Ҫע��ĵ㣺
      1. �ںܶ�����£����౾�����ɶ����ǲ��������ġ����磬������Ϊһ����������������ϻ�����ȸ�����࣬�����ﱾ�����ɶ������Բ��ϳ�����
         ������Ҫ���麯����ʵ�ֶ�̬�����д��麯�������Ϊ�����࣬���������ɶ���
      2. ��Ԫ���ǳ�Ա������ֻ�г�Ա�����ſ���������ģ������Ԫ���������⺯����
      3. ����������Ҫ����Ϊ�麯����������ʵ�ֶ�̬ʱ���ܵ����������������������ֻ����ø������������
*****************************************/


class Fruit{
    public:
        Fruit(){cout << "���๹�캯��" << endl;}
        virtual ~Fruit(){cout << "������������" << endl;}  // ���������趨��Ϊ�麯��
        virtual void foo(){   //ʵ�ֶ�̬�������麯����������಻���麯������ֻ��ʵ����д������ʵ�ֶ�̬
            cout << "Fruit::foo()������" << endl;
        }
        //virtual void foo() = 0;  //���麯������ʱ�಻�ܶ������
    private:
        string name;
        double weight;
        string color;
        int number;

};


class Banana:public Fruit{
    public:
        Banana(){cout << "���๹�캯��" << endl;}
        ~Banana(){cout << "������������" << endl;}
        void foo(){  //��дʵ�ֶ�̬
            cout << "Banana::foo()������" << endl;
        }
};


int main()
{
    //��̬
    Fruit *fru1 = new Fruit();
    Fruit *fru2 = new Banana();

    fru1->foo();
    fru2->foo();

    //�������������������鹹����Ϊʲô��Ҫ���麯��
    delete fru1;
    delete fru2;

    return 0;
}
