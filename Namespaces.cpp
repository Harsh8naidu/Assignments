#include <iostream> 

using namespace std;

namespace luke { int dark = 0; int light = 10; }

namespace anakin { int dark = 10; int light = 0; }

void Namespaces() {

    using luke::dark;

    using anakin::light;

    // Answer 1 will print: 0

    cout << "Answer 1: " << dark + light << endl; // (1)

    {

        int dark = 5;

        // Answer 2 will print: 5

        cout << "Answer 2: " << light + dark << endl; // (2)

        for (int dark = 0; dark < luke::light; dark++) {

            anakin::dark = anakin::dark + dark;

            // Answer 3 will print: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

            cout << dark << endl; //(3)

        }

    }

    // Answer 4 will print: 55

    cout << "Answer 4: " << anakin::dark + anakin::light << endl; //(4)

    {

        // Answer 5 will print: 0

        cout << "Answer 5: " << dark << endl; //(5)

    }

}