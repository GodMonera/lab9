#include <iostream>
using namespace std;

char findGrade(double score){
if(score > 90){
return 'A' ;
}else if(score > 75 || score <=90){
return 'B' ;
}else if(score > 60 || score <=75){
return 'C' ;
}else if(score > 45 || score <=60){
return 'D' ;
}else if(score <= 45){
return 'F' ;
}
}

int main()
{
  cout << findGrade(100) ;
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  if(rank == 'S') {
  cout << "You have received Super Ultra Rare Unit!!!\n" ;
  cout << "You have received 5 gems.\n";
  cout << "You have received 1 gems.\n";
  cout << "You have received 2000 coins.\n";
  cout << "You have received very KAK items.\n";
  } else if(rank == 'A'){
  cout << "You have received 5 gems.\n";
  cout << "You have received 1 gems.\n";
  cout << "You have received 2000 coins.\n";
  cout << "You have received very KAK items.\n";  
  } else if(rank == 'B'){
  cout << "You have received 1 gems.\n";
  cout << "You have received 2000 coins.\n";
  cout << "You have received very KAK items.\n";  
  }else if(rank == 'C'){
  cout << "You have received 2000 coins.\n";
  cout << "You have received very KAK items.\n";  
  }else if(rank == 'D'){
  cout << "You have received very KAK items.\n";  
  }
  
  return 0;
}

