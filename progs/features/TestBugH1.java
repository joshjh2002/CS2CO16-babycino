class TestBugH1 {
    public static void main(String[] a) {
        System.out.println(new Test().f());
    }
}

class Test {

    // if the do/while accepts x as an integer, then it will continue to decrease x
    // until it is 0. The function will then return 0;
    public int f() {
        int x;
        x = 10;

        do {
            x = x - 1;
        } while (x);

        return x;
    }
}
