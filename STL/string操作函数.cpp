#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1;
	cout << str1.empty() << endl;//empty�ж��Ƿ�Ϊ�գ����Ϊ�շ���1����Ϊ�շ���0
	
	string str2("sdsad");
	//�ַ������ 
	string str3 = str1 + str2;//�Ϸ�����
	str3 = str1 + "aaaa";//�Ϸ�����
	//str3="sds"+"sdsd"//�Ƿ�����
	str3 = "aaa" + str1;//�Ϸ�����
	
	//��ֵ����
	str3.assign(str2, 1, 4);//��str2�ĵ�1��4���ַ���ֵ��str3
	str3.assign(6, '##');//��ֵ6��#
	//�޸Ĳ���
	str3[3] = 'a';//�±�Ϊ3���޸�Ϊa //�±겻��Խ�磬��Ȼ�������
	str3.at(4) = 'b';//�±�Ϊ4�޸�Ϊb.Ҳ����Խ�磬��Ȼ�����Ը��쳣��������try����
	
	//��Ӳ���
	str3.append("as");//���ַ�������׷��
	str3.append(3, '!');//׷��3����

	str3.insert(4,"abc");//���뷽��ָ��λ�úͲ�����ַ���
	str3.insert(str3.size() - 1, "wwwwww", 15); //�ӵ��ǵڶ����ַ����棬����wwwwww���ܹ������15����wwwwwww�������ÿո��롣
	
	//�ԱȲ���
	cout << (str2 > str3) << endl;//������������1�������㷵��0
	str3.compare(2, 4, str2);//��str3�ĵ�2���ַ���ʼ����ȡ4���ַ���str2���Ƚ�
	str3.compare(0, 4, str2, 0, 3);//��str3��0���ַ�����ȡ4������str2��0��ȡ3�����Ƚ�
	//ɾ������
	

   //�ַ�������
	//find()
	str3.find(str2);//ʹ��һ��string����ȥ����
   size_t loc = str3.find('xx');//�����ַ�����һ�γ��ֵ���ʼλ��,��������ڻ᷵��һ������npos
   size_t loc1 = str3.find("###", loc+1);//��ǰ���ҵ����±����һ����ʼ��
   str3.find("acvd", 3);//ֻ��acvdǰ��3���ַ�
   cout << loc1 << endl;
   if (loc == string::npos)  //�ж��Ƿ��ҵ������loc ����npos��ʾδ�ҵ�
   {
	   cout << "δ�ҵ�" << "\n";
	}
   //rfind() ��find()�������ơ�ֻ�������ص����ַ������һ�γ��ֵ�λ��
   //find_fisrst_of() �������ַ����״γ��ֵ�λ��
   str3.find_first_of('cba'); //���±�Ϊ3�ҵ���cba�е�a��������a
	
   //copy()��swap()

   //�滻
   
	/*δ��*/
   cout <<str3.c_str() << endl;
	cin.get();
	return 0;
}