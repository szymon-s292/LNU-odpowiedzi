class Person
{
    String compareNames(String name1, String name2) {
        if (name1.compareToIgnoreCase(name2)>=0)
            return "equal";
        else
            return "not equal";
    }
}
