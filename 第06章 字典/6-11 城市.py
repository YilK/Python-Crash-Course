'''
创建一个名为cities 的字典，其中将三个城市名用作键；对于每座城市，都创建一个字典，
并在其中包含该城市所属的国家、人口约数以及一个有关该 城市的事实。
在表示每座城市的字典中，应包含country 、population 和fact 等键。
将每座城市的名字以及有关它们的信息都打印出来。
'''
cities={
    '义乌':{'所属省':'浙江','人口约数':'123456'},
    '杭州':{'所属省':'浙江','人口约数':'123798'}
}
for key,value in cities.items():
    print('城市:',key)
    print('\t所属省:',value['所属省'])
    print('\t人口约数:',value['人口约数'])
    print('------')
