/*
    有一个班4个学生，5门课程。
    1.求第1门课程的平均分；
    2.找出有两门以上课程不及格的学生，输出他们的学号和全部课程成绩及平均成绩；
    3.找出平均成绩在90分以上或全部课程成绩在85分以上的学生。
    分别编2个函数实现以上3个要求
*/
#include <stdio.h>

//每个学生的学号
int IDs[4] = {10000, 10001, 10002, 10003};

//求第1门课程的平均分；
void func1(double data[4][5])
{
    double adv = (data[0][0] + data[1][0] + data[2][0] + data[3][0]) / 4;
    printf("%lf\n", adv);
}

//找出有两门以上课程不及格的学生，输出他们的学号和全部课程成绩及平均成绩；
void func2(double data[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        //统计不及格科数
        int count = 0;
        for (int j = 0; j < 5; j++)
            if (data[i][j] < 60)
                count++;
        //输出有两科以上不及格的学生
        if (count > 2)
        {
            printf("ID: %d\t%.1lf, %.1lf, %.1lf, %.1lf, %.1lf\t%.2lf\n",
                   IDs[i],                                                                //学号
                   data[i][0], data[i][1], data[i][2], data[i][3], data[i][4],            //每门课成绩
                   (data[i][0] + data[i][1] + data[i][2] + data[i][3] + data[i][4]) / 5); //平均成绩
        }
    }
}

//找出平均成绩在90分以上或全部课程成绩在85分以上的学生。
void func3(double data[4][5])
{
    for (int i = 0; i < 4; i++)
    {

        if ((data[i][0] + data[i][1] + data[i][2] + data[i][3] + data[i][4]) / 5 > 90)
            //输出平均成绩在90分以上de
            printf("ID: %d\n", IDs[i]);
        else
        {
            //输出全部课程成绩在85分以上的学生
            for (int j = 0; j < 5; j++)
                if (data[i][j] <= 85)
                    break;
            printf("ID: %d\n", IDs[i]);
        }
    }
}

int main(void)
{
    //学生成绩数据
    double data[4][5] = {
        {97, 95, 95, 95, 98},
        {96, 94, 88, 94, 85},
        {85, 55, 54, 49, 99},
        {98, 97, 96, 89, 95},
    };

    func1(data);
    func2(data);
    func3(data);
}