class User
{
    String firstName;
    String lastName;
    Login userData;
    void createLogin() {
        userData = new Login();
        userData.setLogin( firstName + "." + lastName );
    }
}
