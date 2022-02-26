// C++20's Designated Parameters

struct Parameters {
    int i;
    float f{0};
    double d;
};

void useParameters(Parameters p) {}

int main() {
    useParameters(Parameters{i: 3, d:4.5});
    return 0;
}
