import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;
import org.jsoup.nodes.Element;

import java.util.List;
import java.util.stream.Collectors;

class MessageListHelper {
    public static void main(String[] args) throws Exception {
        new MessageListHelper(args).listMessages().forEach(System.out::println);
    }

    private final String url;

    private MessageListHelper(String... args) {
        url = args[0];
    }

    private List<String> listMessages() throws Exception {
        Document doc = loadDocument();
        return doc.select("table.idxtbl tr td a")
                .stream()
                .filter(Element::hasText)
                .filter(elem -> elem.text().startsWith("MT "))
                .map(Element::text)
                .map(text -> {
                    text = text.substring(3);
                    int idxEnd = text.indexOf(' ');
                    if(idxEnd >= 0) {
                        text = text.substring(0, idxEnd);
                    }

                    return text;
                })
                .filter(text -> !"".equals(text))
                .collect(Collectors.toList());
    }

    private Document loadDocument() throws Exception {
        return Jsoup.connect(url)
                .followRedirects(true)
                .ignoreContentType(true)
                .execute()
                .parse();
    }
}