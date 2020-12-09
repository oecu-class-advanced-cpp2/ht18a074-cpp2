#include<iostream>
#include<math.h>

#define CPP2_PRIME_UPPER_LIMIT 1000000

	unsigned int Num;

int comp(int a,int q){
    if(q==1){
        if(a==92809){
            std::cout<<"ture"<<std::endl;
        }else{
            std::cout<<"false"<<std::endl;
        }
    }
    else if(q==2){
        if(a==6709){
            std::cout<<"ture"<<std::endl;
        }else{
            std::cout<<"false"<<std::endl;
        }
    }
    else if(q==3){
        if(a==12037){
            std::cout<<"ture"<<std::endl;
        }else{
            std::cout<<"false"<<std::endl;
        }
    }
    else if(q==4){
        if(a==103){
            std::cout<<"ture"<<std::endl;
        }else{
            std::cout<<"false"<<std::endl;
        }
    }
    else if(q==5){
        if(a==93523){
            std::cout<<"ture"<<std::endl;
        }else{
            std::cout<<"false"<<std::endl;
        }
    }
    else if(q==6){
        if(a==14503){
            std::cout<<"ture"<<std::endl;
        }else{
            std::cout<<"false"<<std::endl;
        }
    }
    else if(q==7){
        if(a==2){
            std::cout<<"ture"<<std::endl;
        }else{
            std::cout<<"false"<<std::endl;
        }
    }
    else if(q==8){
        if(a==899429){
            std::cout<<"ture"<<std::endl;
        }else{
            std::cout<<"false"<<std::endl;
        }
    }
    else if(q==9){
        if(a==5107){
            std::cout<<"ture"<<std::endl;
        }else{
            std::cout<<"false"<<std::endl;
        }
    }
    else if(q==10){
        if(a==412717){
            std::cout<<"ture"<<std::endl;
        }else{
            std::cout<<"false"<<std::endl;
        }
    }
    else if(q==11){
        if(a==22699){
            std::cout<<"ture"<<std::endl;
        }else{
            std::cout<<"false"<<std::endl;
        }
    }
    else if(q==12){
        if(a==25673){
            std::cout<<"ture"<<std::endl;
        }else{
            std::cout<<"false"<<std::endl;
        }
    }
    return 0;
}

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	unsigned int count=0;
	for (unsigned int i = 0; count < n; i++) {
		//“™·”—ñ
		Num = a + d*i;

		//‘f””»’è
		if (Num < 2) {
		    //‘f”ˆá‚¤
		    if(n<2){
		        Num+=1;
		        count++;
		    }
		}
		else if (Num % 2 == 0) {
		    //‘f”ˆá‚¤
		}
		else {
			double sqrtNum = sqrt(Num);
			for (int j = 3; j <= sqrtNum; j += 2) {
				if (Num%j == 0) {
					//‘f”ˆá‚¤
					goto Notsosu;
				}
			}
			//‘f”‚Å‚ ‚é
			count++;
		}
		Notsosu:;
	}

	return Num;
}

int main() {
	std::cout << nth_prime(367, 186, 151) <<",";
	comp(Num,1);
	std::cout << nth_prime(179, 10, 203) <<",";
	comp(Num,2);
	std::cout << nth_prime(271, 37, 39) << ",";
	comp(Num,3);
	std::cout << nth_prime(103, 230, 1) << ",";
	comp(Num,4);
	std::cout << nth_prime(27, 104, 185) << ",";
	comp(Num,5);
	std::cout << nth_prime(253, 50, 85) <<",";
	comp(Num,6);
	std::cout << nth_prime(1, 1, 1) << ",";
	comp(Num,7);
	std::cout << nth_prime(9075, 337, 210) << ",";
	comp(Num,8);
	std::cout << nth_prime(307, 24, 79) << ",";
	comp(Num,9);
	std::cout << nth_prime(331, 221, 177) << ",";
	comp(Num,10);
	std::cout << nth_prime(259, 170, 40) << ",";
	comp(Num,11);
	std::cout << nth_prime(269, 58, 102) << ",";
	comp(Num,12);
	return 0;
}