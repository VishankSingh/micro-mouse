#include "movement.h"
#include "sensor.h"

#define maze_size 6 













int maze[maze_size][maze_size] = 
{
    {1,1,    1,   1,     1,1},
    {1,1,    1,   1,     1,1},
   
    {1,1,    1,   1,     1,1},
       
    {1,1,    1,   1,     1,1},
   
    {1,1,    1,   1,     1,1},
    {1,1,    1,   1,     1,1}
};

//maze[y][x]

//                ---x    
//               |           
//               y          
//                                                     
//                   0                                          
//                   |                                           
//               1--- ---3                                      
//                   |                                    
//                   2                                       
int x = 0, y = 0; //starting position coordinates
int  o = 0; //starting orientation


int main()
{

    while (1)
    {
        if (x<=1 && y<=1) //block 1
        {
            if (o==0)
            {
                if (r_wallcheck() == 0) {
                    right(); o--;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); y--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }

            if (o==1)
            {
                if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); x--;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }

            if (o==2)
            {
                if (f_wallcheck() == 0)
                {
                    forward(); y++;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }

            if (o==3)
            {
                if (f_wallcheck() == 0)
                {
                    forward(); x++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }
        }

        else if (x==2 && y<=1) //block 2
        {
            if (o==0)
            {
                if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); y--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }

            if (o==1)
            {
                if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); x--;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }

            if (o==2)
            {
                if (f_wallcheck() == 0)
                {
                    forward(); y++;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                } 
            }

            if (o==3)
            {
                if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); x++;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }
        }

        else if (x==3 && y<=1) //block 3
        {
            if (o==0)
            {
                if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); y--;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }

            if (o==1)
            {
                if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); x--;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }

            if (o==2)
            {
                if (f_wallcheck() == 0)
                {
                    forward(); y++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }

            if (o==3)
            {
                if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); x++;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }
        }

        else if (4<=x && y<=1) //block 4
        {
            if (o==0)
            {
                if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); y--;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }

            }

            if (o==1)
            {
                if (f_wallcheck() == 0)
                {
                    forward(); x--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }

            if (o==2)
            {
                if (f_wallcheck() == 0)
                {
                    forward(); y++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }

            if (o==3)
            {
                if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); x++;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }

            }
        }

        else if (x<=1 && y==2) //block 5
        {
            if (o==0)
            {
                if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); y--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }        
            }

            if (o==1)
            {
                if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); x--;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }

            if (o==2)
            {
                if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); y++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }

            if (o==3)
            {
                if (f_wallcheck() == 0)
                {
                    forward(); x++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }
        }

        else if (x<=1 && y==3) //block 6
        {
            if (o==0)
            {
                if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); y--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }

            if (o==1)
            {
                if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); x--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }

            if (o==2)
            {
                if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); y++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }

            if (o==3)
            {
                if (f_wallcheck() == 0)
                {
                    forward(); x++;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }
        }

        else if (4<=x && y==2) //block 7
        {
            if (o==0)
            {
                if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); y--;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }            
            }

            if (o==1)
            {
                if (f_wallcheck() == 0)
                {
                    forward(); x--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }

            if (o==2)
            {
                if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); y++
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }

            }

            if (o==3)
            {
                if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); x++;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }
        }

        else if (4<=x && y==3) //block 8
        {
            if (o==0)
            {
                if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); y--;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }

            if (o==1)
            {
                if (f_wallcheck() == 0)
                {
                    forward(); x--;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }

            if (o==2)
            {
                if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); y++;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }

            if (o==3)
            {
                if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); x++
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }
        }

        else if (x<=1 && 4<=y) //block 9
        {
            if (o==0)
            {
                if (f_wallcheck() == 0)
                {
                    forward(); y--;   
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }

            if (o==1)
            {
                if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); x--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }

            if (o==2)
            {
                if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); y++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }

            if (o==3)
            {
                if (f_wallcheck() == 0)
                {
                    forward(); x++;   
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }
        }

        else if (x==2 && 4<=y) //block 10
        {
            if (o==0)
            {
                if (f_wallcheck() == 0)
                {
                    forward(); y--;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }

            if (o==1)
            {
                if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); x--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }

            if (o==2)
            {
                if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); y++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }

            if (o==3)
            {
                if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); x++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }
        }

        else if (x==3 && 4<=y) //block 11
        {
            if (o==0)
            {
                if (f_wallcheck() == 0)
                {
                    forward(); y--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }

            if (o==1)
            {
                if (r_wallcheck() == 0)
                {
                    right(); o--;                
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); x--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }

            if (o==2)
            {
                if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); y++;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }

            if (o==3)
            {
                if (l_wallcheck() == 0)
                {
                    left(); o++;   
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); x++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }
        }

        else if (4<=x && 4<=y) //block 12
        {
            if (o==0)
            {
                if (f_wallcheck() == 0)
                {
                    forward(); y--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }

            if (o==1)
            {
                if (f_wallcheck() == 0)
                {
                    forward(); x--;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }

            if (o==2)
            {
                if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); y++;
                }
                else if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
            }

            if (o==3)
            {
                if (l_wallcheck() == 0)
                {
                    left(); o++;
                }
                else if (f_wallcheck() == 0)
                {
                    forward(); x++;
                }
                else if (r_wallcheck() == 0)
                {
                    right(); o--;
                }
            }
        }

        o%=4;
        o = (o>=0) ? o : o+4;
    }


}
































































