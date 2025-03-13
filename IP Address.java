import java.net.*;
import java.util.*;
class ipaddr{
    public static void main(String args[])
    throws UnknownHostException
    {
        String s="https://www.yahoo.com/";
        try{
            InetAddress ip=InetAddress.getByName(newURL(s).getHost());
            System.out.println("PublicIPAddressof:"+ip);
        }catch(MalformedURLException e){
            System.out.println("InvalidURL");
        }
    }
}
