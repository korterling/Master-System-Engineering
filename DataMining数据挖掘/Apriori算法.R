
##一下程序来自官方文件
##http://cran.r-project.org/web/packages/arules/vignettes/arules.pdf
##install.packages("arules")
library(arules)

##first example ##########
data(Epub)
Epub
summary(Epub)
str(Epub)
year <- strftime(as.POSIXlt(transactionInfo(Epub)[["TimeStamp"]]), "%Y")
table(year)
Epub2003 <- Epub[year == "2003"]
length(Epub2003)
image(Epub2003)
transactionInfo(Epub2003[size(Epub2003) > 20])
inspect(Epub2003[1:5])
as(Epub2003[1:5], "list")
EpubTidLists <- as(Epub, "tidLists")
EpubTidLists
as(EpubTidLists[1:3], "list")
##########



data("AdultUCI")
dim(AdultUCI)
AdultUCI[1:2,]
AdultUCI[["fnlwgt"]] <- NULL
AdultUCI[["education-num"]] <- NULL

AdultUCI[[ "age"]] <- ordered(cut(AdultUCI[[ "age"]], c(15,25,45,65,100)),
                              +
                                
                                
Adult <- as(AdultUCI, "transactions")

Adult
summary(Adult)

itemFrequencyPlot(Adult, support = 0.1, cex.names=0.8)

rules <- apriori(Adult,
                 +                  parameter = list(support = 0.01, confidence = 0.6))

rules
summary(rules)
rulesIncomeSmall <- subset(rules, subset = rhs %in% "income=small" & lift > 1.2)
rulesIncomeLarge <- subset(rules, subset = rhs %in% "income=large" & lift > 1.2)
inspect(head(sort(rulesIncomeSmall, by = "confidence"), n = 3))
inspect(head(sort(rulesIncomeLarge, by = "confidence"), n = 3))
write(rulesIncomeSmall, file = "data.csv", sep = ",", col.names = NA)
write.PMML(rulesIncomeSmall, file = "data.xml")



milk<- c(0,0,0,1)
bread<- c(0,1,1,0)
fish<- c(1,0,1,0)
apple<- c(1,1,0,0)
data<- data.frame(milk,bread,fish,apple)