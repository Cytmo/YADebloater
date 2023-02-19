import logging
import os


current_work_dir = os.path.dirname(__file__)

class GetLog(object):
    def __init__(self):
        self.name = 'log'
        self.level = logging.DEBUG
        self.filename = os.path.join(current_work_dir, 'test.log')
        logging.info("Logging to",self.filename)


    def get_log(self):

        #设置logger
        logger = logging.getLogger(name=self.name)
        logger.setLevel(level=self.level)


        if not logger.handlers:
            # 初始化handler
            stream_handler = logging.StreamHandler()
            file_handler = logging.FileHandler(filename=self.filename)

            # 设置handler等级
            stream_handler.setLevel(level=logging.WARNING)
            file_handler.setLevel(level=self.level)

            # 设置日志格式
            sf_format = logging.Formatter("%(asctime)s-%(name)s-[line:%(lineno)d]-%(levelname)s-%(message)s")
            sf_format = logging.Formatter("[line:%(lineno)d]-%(levelname)s-%(message)s")
            stream_handler.setFormatter(sf_format)
            file_handler.setFormatter(sf_format)
            
            # 将handler添加到self.__logger
            # logger.addHandler(stream_handler)
            logger.addHandler(file_handler)

        #返回logger
        return logger

if __name__ == '__main__':
    GetLog().get_log().info("我是info")
    GetLog().get_log().debug("我是debug")
    GetLog().get_log().warning("我是warn")
    GetLog().get_log().error("我是error")