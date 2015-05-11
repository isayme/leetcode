class TrieNode:
    __slots__ = ('valid', 'children')

    def __init__(self):
        self.valid = False
        self.children = {}

    def setValid(self, value):
        self.valid = value

    def getValid(self):
        return self.valid

class Trie:

    def __init__(self):
        self.root = TrieNode()

    # @param {string} word
    # @return {void}
    # Inserts a word into the trie.
    def insert(self, word):
        node = self.root
        for ch in word:
            if None == node.children.get(ch):
                node.children[ch] =  TrieNode()
            node = node.children[ch]

        node.setValid(True)

    # @param {string} word
    # @return {boolean}
    # Returns if the word is in the trie.
    def search(self, word):
        node = self.root
        for ch in word:
            if None == node.children.get(ch):
                return False
            node = node.children[ch]

        return node.getValid()

    # @param {string} prefix
    # @return {boolean}
    # Returns if there is any word in the trie
    # that starts with the given prefix.
    def startsWith(self, prefix):
        node = self.root
        for ch in prefix:
            if None == node.children.get(ch):
                return False
            node = node.children[ch]

        return True
        

# Your Trie object will be instantiated and called as such:
# trie = Trie()
# trie.insert("somestring")
# trie.search("key")