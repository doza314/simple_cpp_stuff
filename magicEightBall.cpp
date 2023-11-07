#include <iostream> 
#include <cstdlib>
#include <ctime>

int main() {
    std::cout << "THE MAGIC EIGHT BALL SAYS: ";

    srand(time(NULL));

    int number = std::rand() % 20;

    switch(number) {
        case 0 :
            std::cout << "It is certain.";
        break;
        case 1 :
            std::cout << "It is decidely so.";
        break;
        case 2 :
            std::cout << "Outlook not so good.";
        break;
        case 3 :
            std::cout << "Very doubtful.";
        break;
        case 4 :
            std::cout << "Without a doubt.";
        break;
        case 5 :
            std::cout << "Yes - definitely.";
        break;
        case 6 :
            std::cout << "My sources say no.";
        break;
        case 7 :
            std::cout << "My reply is no.";
        break;
        case 8 :
            std::cout << "You may rely on it.";
        break;
        case 9 :
            std::cout << "As I see it, yes.";
        break;
        case 10 :
            std::cout << "Don't count on it.";
        break;
        case 11 :
            std::cout << "Concentrate and ask again.";
        break;
        case 12 :
            std::cout << "Cannot predict now.";
        break;
        case 13 :
            std::cout << "Most likely.";
        break;
        case 14 :
            std::cout << "Better not tell you now.";
        break;
        case 15 :
            std::cout << "Outlook good.";
        break;
        case 16 :
            std::cout << "Signs point to yes.";
        break;
        case 17 :
            std::cout << "Reply hazy, try again.";
        break;
        case 18 :
            std::cout << "Ask again later.";
        break;
        case 19 :
            std::cout << "Yes.";
        break;
    }


    return 0;
}