#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

//呼びを区別し，ナット分の長さを足す
double Length(double a,double b) {
	double answer1{};
	if (a == 6) {
		answer1 = b+ 5.1;
	}
	else if (a == 8) {
		answer1 = b + 7.3;
	}
	else if (a == 10) {
		answer1 = b + 8.3;
	}
	return answer1;
}

//適切な長さを表示させる
double ItemLength(double c, double d) {
	//長さの種類
	vector<int> v{ 6,8,10,12,14,15,16,18,20,22,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95 };
	vector<int> ve{ 8,10,12,15,16,18,20,22,25,30,35,40,45,50,55,60,65,70,75 };
	vector<int> vec{ 10,12,15,20,25,30,35,40,45,50,55,60,65,70 };
	auto it1 = v.begin();
	auto it2 = ve.begin();
	auto it3 = vec.begin();
	//呼び系6の場合
	if (c == 6) {
		if (d == 6) {
			it1;
		}
		else if (6 < d && d<= 8) {
			++it1;
		}
		else if (8 < d && d <= 10) {
			it1 = it1 + 2;
		}
		else if (10 < d && d <= 12) {
			it1 = it1 + 3;
		}
		else if (12 < d && d <= 14) {
			it1 = it1 + 4;
		}
		else if (14 < d && d <= 15) {
			it1 = it1 + 5;
		}
		else if (15 < d && d <= 16) {
			it1 = it1 + 6;
		}
		else if (16 < d && d <= 18) {
			it1 = it1 + 7;
		}
		else if (18 < d && d <= 20) {
			it1 = it1 + 8;
		}
		else if (20 < d && d <= 22) {
			it1 = it1 + 9;
		}
		else if (22 < d && d <= 25) {
			it1 = it1 + 10;
		}
		else if (25 < d && d <= 30) {
			it1 = it1 + 11;
		}
		else if (30 < d && d <= 35) {
			it1 = it1 + 12;
		}
		else if (35 < d && d <= 40) {
			it1 = it1 + 13;
		}
		else if (40 < d && d <= 45) {
			it1 = it1 + 14;
		}
		else if (45 < d && d <= 50) {
			it1 = it1 + 15;
		}
		else if (50 < d && d <= 55) {
			it1 = it1 + 16;
		}
		else if (55 < d && d <= 60) {
			it1 = it1 + 17;
		}
		else if (60 < d && d <= 65) {
			it1 = it1 + 18;
		}
		else if (65 < d && d <= 70) {
			it1 = it1 + 19;
		}
		else if (70 < d && d <= 75) {
			it1 = it1 + 20;
		}
		else if (75 < d && d <= 80) {
			it1 = it1 + 21;
		}
		else if (80 < d && d <= 85) {
			it1 = it1 + 22;
		}
		else if (85 < d && d <= 90) {
			it1 = it1 + 23;
		}
		else if (90 < d && d <= 95) {
			it1 = it1 + 24;
		}
		return *it1;
	}
	//呼び系8の場合
	else if (c == 8) {
		if (d == 8) {
			it2;
		}
		else if (8 < d && d <= 10) {
			++it2;
		}
		else if (10 < d && d <= 12) {
			it2 = it1 + 2;
		}
		else if (12 < d && d <= 15) {
			it2 = it1 + 3;
		}
		else if (15 < d && d <= 16) {
			it2 = it1 + 4;
		}
		else if (16 < d && d <= 18) {
			it2 = it2 + 5;
		}
		else if (18 < d && d <= 20) {
			it2 = it2 + 6;
		}
		else if (20 < d && d <= 22) {
			it2 = it2 + 7;
		}
		else if (22 < d && d <= 25) {
			it2 = it2 + 8;
		}
		else if (25 < d && d <= 30) {
			it2 = it2 + 9;
		}
		else if (30 < d && d <= 35) {
			it2 = it2 + 10;
		}
		else if (40 < d && d <= 45) {
			it2 = it2 + 11;
		}
		else if (45 < d && d <= 50) {
			it2 = it2 + 12;
		}
		else if (50 < d && d <= 55) {
			it2 = it2 + 13;
		}
		else if (55 < d && d <= 60) {
			it2 = it2 + 14;
		}
		else if (60 < d && d <= 65) {
			it2 = it2 + 15;
		}
		else if (65 < d && d <= 70) {
			it2 = it2 + 16;
		}
		else if (70 < d && d <= 75) {
			it2 = it2 + 8;
		}
		return *it2;
	}
	//呼び系10の場合
	else if (c == 10) {
		if (d == 10) {
			it3;
		}
		else if (10 < d && d <= 12) {
			++it3;
		}
		else if (12 < d && d <= 15) {
			it3 = it3 + 2;
		}
		else if (15 < d && d <= 20) {
			it3 = it3 + 3;
		}
		else if (20 < d && d <= 25) {
			it3 = it3 + 4;
		}
		else if (25 < d && d <= 30) {
			it3 = it3 + 5;
		}
		else if (30 < d && d <= 35) {
			it3 = it3 + 6;
		}
		else if (35 < d && d <= 40) {
			it3 = it3 + 7;
		}
		else if (40 < d && d <= 45) {
			it3 = it3 + 8;
		}
		else if (45 < d && d <= 50) {
			it3 = it3 + 9;
		}
		else if (55 < d && d <= 60) {
			it3 = it3 + 10;
		}
		else if (60 < d && d <= 65) {
			it3 = it3 + 11;
		}
		else if (65 < d && d <= 70) {
			it3 = it3 + 12;
		}
		return *it3;
	}
	return 0;
}


//値段を表示させる
double Cost(double e, double f) {
	double answer2{};
	if (e == 6) {
		if (f == 6) {
			answer2 = 15;
		}
		else if((f == 8) ||(f== 20 )|| (f == 22) || (f == 25) ){
			answer2 = 7;
		}
		else if ((f == 10) ||(f == 12) ||(f == 14) ||(f == 15) ||(f == 16) || (f == 18)){
			answer2 = 4;
		}
		else if (f == 30) {
			answer2 = 8;
		}
		else if (f == 35) {
			answer2 = 9;
		}
		else if (f == 40) {
			answer2 = 10;
		}
		else if (f == 45) {
			answer2 = 11;
		}
		else if (f == 50) {
			answer2 = 12;
		}
		else if (f == 55) {
			answer2 = 13;
		}
		else if (f == 60) {
			answer2 = 14;
		}
		else if (f == 65) {
			answer2 = 17;
		}
		else if (f == 70) {
			answer2 = 19;
		}
		else if (f == 75) {
			answer2 = 20;
		}
		else if (f == 80) {
			answer2 = 24;
		}
		else if ((f == 85 )|| (f == 90)) {
			answer2 = 28;
		}
		else if (f == 95) {
			answer2 = 32;
		}
	}
	else if (e == 8) {
		if (f == 8) {
			answer2 = 20;
		}
		else if ((f == 10) || (f == 40)) {
			answer2 = 12;
		}
		else if ((f == 12) || (f == 15) || (f == 16) || (f == 18) || (f == 20) || (f == 22) || (f == 25) || (f == 30)) {
			answer2 = 10;
		}
		else if (f == 35) {
			answer2 = 12;
		}
		else if (f == 45) {
			answer2 = 13;
		}
		else if (f == 50) {
			answer2 = 14;
		}
		else if (f == 55) {
			answer2 = 17;
		}
		else if (f == 60) {
			answer2 = 20;
		}
		else if (f == 65) {
			answer2 = 21;
		}
		else if (f == 70) {
			answer2 = 22;
		}
		else if (f == 75) {
			answer2 = 24;
		}
	}
	else if (e == 10) {
		if( (f == 10) || (f == 12)) {
			answer2 = 28;
		}
		else if ((f == 15) || (f == 30)) {
			answer2 = 14;
		}
		else if ((f == 20) || (f == 25)) {
			answer2 = 13;
		}
		else if (f == 35) {
			answer2 = 17;
		}
		else if (f == 40) {
			answer2 = 19;
		}
		else if (f == 45) {
			answer2 = 20;
		}
		else if (f == 50) {
			answer2 = 22;
		}
		else if (f == 55) {
			answer2 = 24;
		}
		else if (f == 60) {
			answer2 = 26;
		}
		else if (f == 65) {
			answer2 = 29;
		}
		else if (f == 70) {
			answer2 = 31;
		}
	}
	return answer2;
}

//クラス
struct Item {
	double finalsize;
	double finallength;
	double finalcost;
	//最終的な表示
	void
		print() {
		cout << "おすすめの商品→ 呼び径：M" << finalsize << "　長さ：" << finallength << "　mm　値段：" << finalcost << "円/個（税込）" << endl;
	}
};



int main() {
	//題名＆注記
	cout<<"～ボルト発注お助け！プログラム～\n";
	cout << "（注）六角穴付ボルトとUナット使用時にのみ使用できます．\n";
	cout << endl;

	//サイズ入力
	try {
		cout << "ねじの呼び径を入力してください.\n";
		double size;
		cin >> size;

		//例外
		if ((size == 6) || (size == 8) || (size == 10)) {

			cout << "必要長さを入力してください.\n";
			double length1;
			cin >> length1;

			//商品が無い長さの場合警告する
			if (((size == 6) && ((length1 < 1.9) || (86.9 < length1))) || ((size == 8) && ((length1 < 1.7) || (64.7 < length1))) || ((size == 10) && ((length1 < 0.7) || (58.7 < length1)))) {
				cout << "＜該当する長さの商品はありません＞" << endl;
			}
			else {


				double length2;
				length2 = Length(size, length1) + 3;//二山分足す

				//適切な長さを表示する
				double length3;
				length3 = ItemLength(size, length2);

				//値段を表示する
				double cost;
				cost = Cost(size, length3);

				//最終的な表示
				Item finalanswer = { size,length3,cost };
				cout << endl;
				finalanswer.print();
			}
		}
		else {
			throw runtime_error("<呼び径はM6,M8,M10に限定されます＞");
		}
		}
		//例外キャッチ
		catch (exception& e) {
			cerr << e.what() << endl;
		}
}
