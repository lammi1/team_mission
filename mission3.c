#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string menu = get_string("요일을 입력하세요 : ");
    printf("%s : ", menu);
    if (menu == "월요일" || menu == "월")
    {
        printf("청국장\n");
    }
    else if (menu == "화요일")
    {
        printf("비빔밥\n");
    }
    else if (menu == "수요일")
    {
        printf("된장찌개\n");
    }
    else if (menu == "목요일")
    {
        printf("칼국수\n");
    }
    else if (menu == "금요일")
    {
        printf("냉면\n");
    }
    else if (menu == "토요일")
    {
        printf("소불고기\n");
    }
    else if (menu == "일요일")
    {
        printf("오삼불고기\n");
    }
}
