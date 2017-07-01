int noOddDigits(int n) {
    string t = new string(n.ToString().ToCharArray().Where(x => x % 2 == 0).ToArray());
    try{
        return Convert.ToInt32(t);
    }
    catch{
        return 0;
    }
}
