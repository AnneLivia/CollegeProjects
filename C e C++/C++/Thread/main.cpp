#include <iostream>
#include <thread>

using namespace std;

static bool s_finished = false;

void doWork() {
    using namespace std::literals::chrono_literals;
    while(!s_finished) {
        cout << "Working...\n";
        this_thread::sleep_for(1s);
    }
}

int main()
{
    thread worker(doWork);
    cin.get();
    s_finished = true;
    worker.join(); // We will not continue to the next line until the worker is not finished


    return 0;
}
