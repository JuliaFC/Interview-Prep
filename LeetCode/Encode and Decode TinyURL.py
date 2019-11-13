class Codec:


    def __init__(self):
        self.url2code = {}
        self.code2url = {}
        self.code = 0

    def encode(self, longUrl):
        self.code2url[self.code] = longUrl
        self.url2code[longUrl] = self.code
        
        self.code = self.code + 1
        
            
        return 'http://tinyurl.com/' + str(self.url2code[longUrl])

    def decode(self, shortUrl):
        return self.code2url[int(shortUrl[19:])]