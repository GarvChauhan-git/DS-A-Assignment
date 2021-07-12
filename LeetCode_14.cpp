class Solution {
public:
    int romanToInt(string s) {
         int sum=0;
         string arr[7] ={"I","V","X","L","C","D","M"} ;
         for(int i=0; i<s.length() ; i++)
            {
                if(RtoI(s[i])<RtoI(s[i+1]))
                {
                    sum = sum + (RtoI(s[i+1]) - RtoI(s[i])) ;
                    i++;
                }
                else
                {
                    sum = sum + RtoI(s[i]) ;
                    
                }
            }
         return sum ;  
    }
     int RtoI( char i ){
           
         switch(i)
            {
                case 'I' : return 1;
                           break;
                case 'V' : return 5;
                           break;
                case 'X' : return 10;
                           break;
                case 'L' : return 50;
                           break;
                case 'C' : return 100;
                           break;
                case 'D' : return 500;
                           break;
                case 'M' : return 1000;
                           break;
                default  : return 0 ;
                           break;
             }
    }

};
