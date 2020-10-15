import scrapy
from ..items import AmazonItem


class AmazonSpider(scrapy.Spider):
    name = "amazon"
    start_urls = [
        "https://www.amazon.com/b?node=283155"
    ]
    def parse(self, response):
        items = AmazonItem()
        product_name = response.css('h2.s-access-title::text').extract()

        product_price = response.css('h2.sx-price-whole::text').extract()
        items['product_name'] = product_name
        items['product_price'] = product_price
        yield items