class Board {
private:
    int choice;

public:
    void Draw()
    {
        std::cout << &types::valid;
        if (types::condition == false) {

            system("CLS");
            for (int i = 0; i < types::options.size(); i++)
                std::cout << types::options[i] << " (" << i << ")" << std::endl;
            std::cout << "Enter option or (-1) to quit: ";
            std::cin >> choice;
            std::cout << std::endl;
            while (!isValid(choice)) {
                std::cout << "Please enter a valid choice or (-1) to quit: ";
                std::cin >> choice;
                std::cout << std::endl;
                if (choice == -1)
                    break;
            }
            switch (choice) {
            case 0:
                setcondition(true);
                std::cout << "Hello";
                break;
            case 1:
                setcondition(true);
                break;
            case 2:
                setcondition(true);
                push_file();
                break;
            case 3:
                setcondition(true);
                pull_file();
                break;
            default:
                std::cout << "User exit\n";
            }
        }
    }
};