/**
 * InnerSearchingAlgos
 */
public class InnerSearchingAlgos {

    public static int linearSearch(int a[],int x) {
        for (int i = 0; i < a.length; i++) {
            if (a[i]==x) {
                return i;
            }
        }return -1;
    }

    public static int binarySearch(int a[],int left,int right,int x) {
        if(left>right) return -1;

        int mid=left+(right-left)/2;

        if(x==a[mid]){
            return mid;
        }
        else if(x>a[mid]){
            binarySearch(a,mid+1,right,x);
        }else{
            binarySearch(a,left,mid-1,x);
        }

    }

    public static void main(String[] args) {
        int a[]={1,54,23,4,6,68,90};
        System.out.println(linearSearch(a, 90));

        int b[]={1,2,23,54,56,76,98};
        System.out.println(binarySearch(b,0,b.length, 90));
    }
    
}