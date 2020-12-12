function isCircular(list) {
  let slowPtr = list.getFirst(); //or slowPtr=list.head
  let fasTPtr = list.getFirst(); //or fasTPtr=list.head

  while (fastPtr.next && fastPtr.next.next) {
    slowPtr = slowPtr.next;
    fastPtr = fastPtr.next;

    if (slowPtr === fasTPtr) {
      return true;
    }

    return false;
  }
}
