#include "movement.h"
#include "sensor.h"

#define maze_size 6 


int maze[maze_size][maze_size] = 
{
    {1,1,1,1,1,1},
    {1,1,1,1,1,1},
    {1,1,1,1,1,1},
    {1,1,1,1,1,1},
    {1,1,1,1,1,1},
    {1,1,1,1,1,1}
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



int x = 0, y = 0, o = 0; // x and y are the coordinates of the robot, o is the orientation of the robot



int main()
{
    if (x<=1 && y<=1) //block 1
    {
        if (o==0)
        {
            if (r_wallcheck == 0)
            {
                right(); o--;
                forward(); x++;
            }

            else if (f_wallcheck == 0)
            {
                forward(); y--;
            }

            else if (l_wallcheck == 0)
            {
                left(); o++;
                forward(); x--;
            }
        }

        if (o==1)
        {
            if (l_wallcheck == 0)
            {
                left(); o++;
                forward(); y++;
            }
            else if (f_wallcheck == 0)
            {
                forward(); x--;
            }
            else if (r_wallcheck == 0)
            {
                right(); o--;
                forward(); y--;
            }
        }

        if (o==2)
        {
            if (f_wallcheck == 0)
            {
                forward(); y++;
            }
            else if (l_wallcheck == 0)
            {
                left(); o++;
                forward(); x++;
            }
            else if (r_wallcheck == 0)
            {
                right(); o--;
                forward(); x--;
            }
        }

        if (o==3)
        {
            if (f_wallcheck == 0)
            {
                forward(); x++;
            }
            else if (r_wallcheck == 0)
            {
                right(); o--;
                forward(); y++;
            }
            else if (l_wallcheck == 0)
            {
                left(); o++;
                forward(); y--;
            }
        }
    }

    else if (x==2 && y<=1) //block 2
    {
        if (o==0)
        {
            if (r_wallcheck == 0)
            {
                right(); o--;
                forward(); x++;
            }

            else if (f_wallcheck == 0)
            {
                forward(); y--;
            }

            else if (l_wallcheck == 0)
            {
                left(); o++;
                forward(); x--;
            }
        }

        if (o==1)
        {
            if (l_wallcheck == 0)
            {
                left(); o++;
                forward(); y--;
            }

            else if (f_wallcheck == 0)
            {
                forward(); x--;
            }
            
            else if (r_wallcheck == 0)
            {
                right(); o--;
                forward(); y++;
            }
        }

        if (o==2)
        {
            if (f_wallcheck == 0)
            {
                forward(); y++;
            }

            else if (l_wallcheck == 0)
            {
                left(); o++;
                forward(); x++;
            }
            
            else if (r_wallcheck == 0)
            {
                right(); o--;
                forward(); x--;
            }
            
        }

        if (o==3)
        {
            if (r_wallcheck == 0)
            {
                right(); o--;
                forward(); y++;
            }

            else if (f_wallcheck == 0)
            {
                forward(); x++;
            }

            else if (l_wallcheck == 0)
            {
                left(); o++;
                forward(); y--;
            }
        }
    }

    else if (x==3 && y<=1) //block 3
    {
        if (o==0)
        {
            if (l_wallcheck == 0)
            {
                left(); o++;
                forward(); x--;
            }
            
            else if (f_wallcheck == 0)
            {
                forward(); y--;
            }
            
            else if (r_wallcheck == 0)
            {
                right(); o--;
                forward(); x++;
            }
            
            
        }

        if (o==1)
        {
            if (l_wallcheck == 0)
            {
                left(); o++;
                forward(); y++;
            }
            
            else if (f_wallcheck == 0)
            {
                forward(); x--;
            }
            
            else if (r_wallcheck == 0)
            {
                right(); o--;
                forward(); y--;
            }
        }

        if (o==2)
        {
            if (f_wallcheck == 0)
            {
                forward(); y++;
            }
            else if (r_wallcheck == 0)
            {
                right(); o--;
                forward(); x--;
            }
            
            
        }

        if (o==3)
        {
            
        }
    }

    else if (4<=x && y<=1) //block 4
    {
        if (o==0)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==1)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==2)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==3)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }
    }

    else if (x<=1 && y==2) //block 5
    {
        if (o==0)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==1)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==2)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==3)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }
    }

    else if (x<=1 && y==3) //block 6
    {
        if (o==0)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==1)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==2)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==3)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }
    }

    else if (4<=x && y==2) //block 7
    {
        if (o==0)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==1)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==2)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==3)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }
    }

    else if (4<=x && y==3) //block 8
    {
        if (o==0)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==1)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==2)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==3)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }
    }

    else if (x<=1 && 4<=y) //block 9
    {
        if (o==0)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==1)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==2)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==3)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }
    }

    else if (x==2 && 4<=y) //block 10
    {
        if (o==0)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==1)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==2)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==3)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }
    }

    else if (x==3 && 4<=y) //block 11
    {
        if (o==0)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==1)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==2)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==3)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }
    }

    else if (4<=x && 4<=y) //block 12
    {
        if (o==0)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==1)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==2)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }

        if (o==3)
        {
            if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 1)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 1 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 1 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }

            else if (l_wallcheck == 0 && f_wallcheck == 0 && r_wallcheck == 0)
            {
                ;
            }
        }
    }

    o%=4;
    o = (o>=0) ? o : o+4;








}
































































