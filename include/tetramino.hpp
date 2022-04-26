#pragma once

namespace GameInfo{
    static constexpr int colors[7][3] = {
        {50,200,255},
        {50,70,237},
        {249,146,2},
        {249,221,2},
        {70,216,2},
        {170,50,250},
        {211,0,0},
    };

    static constexpr int tetraminos[7][4][4][4] = {
        {
            {
                {0,0,0,0},
                {1,1,1,1},
                {0,0,0,0},
                {0,0,0,0}
            },{
                {0,0,1,0},
                {0,0,1,0},
                {0,0,1,0},
                {0,0,1,0}
            },{
                {0,0,0,0},
                {0,0,0,0},
                {1,1,1,1},
                {0,0,0,0}
            },{
                {0,1,0,0},
                {0,1,0,0},
                {0,1,0,0},
                {0,1,0,0}
            }
        },
        {
            {
                {1,0,0,0},
                {1,1,1,0},
                {0,0,0,0},
                {0,0,0,0}
            },{
                {0,1,1,0},
                {0,1,0,0},
                {0,1,0,0},
                {0,0,0,0}
            },{
                {0,0,0,0},
                {1,1,1,0},
                {0,0,1,0},
                {0,0,0,0}
            },{
                {0,1,0,0},
                {0,1,0,0},
                {1,1,0,0},
                {0,0,0,0},
            }		
        },{
            {
                {0,0,1,0},
                {1,1,1,0},
                {0,0,0,0},
                {0,0,0,0},
            },{
                {0,1,0,0},
                {0,1,0,0},
                {0,1,1,0},
                {0,0,0,0},
            },{
                {0,0,0,0},
                {1,1,1,0},
                {1,0,0,0},
                {0,0,0,0},
            },{
                {1,1,0,0},
                {0,1,0,0},
                {0,1,0,0},
                {0,0,0,0},
            }
        },{
            {
                {0,1,1,0},
                {0,1,1,0},
                {0,0,0,0},
                {0,0,0,0},
            },{
                {0,1,1,0},
                {0,1,1,0},
                {0,0,0,0},
                {0,0,0,0},
            },{
                {0,1,1,0},
                {0,1,1,0},
                {0,0,0,0},
                {0,0,0,0},
            },{
                {0,1,1,0},
                {0,1,1,0},
                {0,0,0,0},
                {0,0,0,0},
            }	
        },{
            {
                {0,1,1,0},
                {1,1,0,0},
                {0,0,0,0},
                {0,0,0,0},
            },{
                {0,1,0,0},
                {0,1,1,0},
                {0,0,1,0},
                {0,0,0,0},
            },{
                {0,0,0,0},
                {0,1,1,0},
                {1,1,0,0},
                {0,0,0,0},
            },{
                {1,0,0,0},
                {1,1,0,0},
                {0,1,0,0},
                {0,0,0,0},
            }	
        },
        {
            {
                {0,1,0,0},
                {1,1,1,0},
                {0,0,0,0},
                {0,0,0,0},
            },{
                {0,1,0,0},
                {0,1,1,0},
                {0,1,0,0},
                {0,0,0,0},
            },{
                {0,0,0,0},
                {1,1,1,0},
                {0,1,0,0},
                {0,0,0,0},
            },{
                {0,1,0,0},
                {1,1,0,0},
                {0,1,0,0},
                {0,0,0,0},
            }	
        },{
            {
                {1,1,0,0},
                {0,1,1,0},
                {0,0,0,0},
                {0,0,0,0},
            },{
                {0,0,1,0},
                {0,1,1,0},
                {0,1,0,0},
                {0,0,0,0},
            },{
                {0,0,0,0},
                {1,1,0,0},
                {0,1,1,0},
                {0,0,0,0},
            },{
                {0,1,0,0},
                {1,1,0,0},
                {1,0,0,0},
                {0,0,0,0},
            }	
        }
    };

    static constexpr int kicks[2][2][4][5][2]={
        {//[Normal block or I block]
            {//[clockwise or counter clockwise]
                {//[rotation, start at 0][kick counter][dx,dy]
                    {0,0},
                    {-1,0},
                    {-1,-1},
                    {0,2},
                    {-1,2}
                },{
                    {0,0},
                    {1,0},
                    {1,1},
                    {0,-2},
                    {1,-2}
                },{
                    {0,0},
                    {1,0},
                    {1,-1},
                    {0,2},
                    {1,2}
                },{
                    {0,0},
                    {-1,0},
                    {-1,1},
                    {0,-2},
                    {-1,-2}
                }
            },{
                {
                    {0,0},
                    {1,0},
                    {1,-1},
                    {0,2},
                    {1,2}
                },{
                    {0,0},
                    {1,0},
                    {1,1},
                    {0,-2},
                    {1,-2}
                },{
                    {0,0},
                    {-1,0},
                    {-1,-1},
                    {0,2},
                    {-1,2}
                },{
                    {0,0},
                    {-1,0},
                    {-1,1},
                    {0,-2},
                    {-1,-2}
                }
            }
        },{
            {
                {
                    {0,0},
                    {-2,0},
                    {1,0},
                    {-2,1},
                    {1,-2}
                },{
                    {0,0},
                    {-1,0},
                    {2,0},
                    {-1,-2},
                    {2,1}
                },{
                    {0,0},
                    {2,0},
                    {-1,0},
                    {2,-1},
                    {-1,2}
                },{
                    {0,0},
                    {1,0},
                    {-2,0},
                    {1,2},
                    {-2,-1}
                }
            },{
                {
                    {0,0},
                    {-1,0},
                    {2,0},
                    {-1,-2},
                    {2,1}
                },{
                    {0,0},
                    {2,0},
                    {-1,0},
                    {2,-1},
                    {-1,2}
                },{
                    {0,0},
                    {1,0},
                    {-2,0},
                    {1,2},
                    {-2,-1}
                },{
                    {0,0},
                    {-2,0},
                    {1,0},
                    {-2,1},
                    {1,-2}
                }
            }
        }
    };

    static constexpr float speed[19] = {
        0.01667,
        0.021017,
        0.026977,
        0.035256,
        0.04693,
        0.06361,
        0.0879,
        0.1236,
        0.1775,
        0.2598,
        0.388,
        0.59,
        0.92,
        1.46,
        2.36,
        3.91,
        6.61,
        11.43,
        20.0
    };

    static constexpr int scoring[17][2]={
        {//Single
            100,0
        },
        {//Double
            300,0
        },
        {//Triple
            500,0
        },
        {//Tetris
            800,1
        },
        {//T-Spin Mini no lines
            100,0
        },
        {//T-Spin Mini single
            200,1
        },
        {//T-Spin Mini Double
            400,1
        },
        {//T-Spin no lines
            400,0
        },
        {//T-Spin Single
            800,1
        },
        {//T-Spin Double
            1200,1
        },
        {//T-Spin Triple
            1600,1
        },{//Perfect Clear Single
            800,0
        },{//Perfect Clear Double
            1200,0
        },{//Perfect Clear Triple
            1800,0
        },{//Perfect Clear Tetris
            2000,0
        },{//Perfect Clear Back to Back Tetris  
            3200,0
        },
        {//Combo
            50,0
        }
    };
}
